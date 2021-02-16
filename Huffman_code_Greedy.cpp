#include<bits/stdc++.h>
#define ll long long int
#define l(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
int main(){
	ll n;
	cout<<"Message length:";
	cin>>n;
	ll total_char;
	cout<<"Total Characters:";
	cin>>total_char;
	cout<<"\nEnter Characters + frequency:(in descending order): ";
	char ch[total_char];
	ll freq[total_char+1];
	l(i,0,total_char){
		cin>>ch[i]>>freq[i];
	}
	ll i=0;
	ll sum[total_char+1]={0};
	sum[total_char-1]=freq[total_char-1];
	for(i=total_char-2;i>=0;i--){
		sum[i]=sum[i+1]+freq[i];
	}
	ll j=0;
	cout<<"\nDesired Huffman Codes are:\n";
//	printing the huffman codes 
	l(i,0,total_char){
//		if(i<total_char-1){
				cout<<ch[i]<<"= ";
				for(j=1;j<i+1;j++){
					if(sum[j]==freq[j-1]){
						cout<<1;
					}
					else if(sum[j]<freq[j-1]){
						cout<<0;
					}	
				}
				if(j<total_char){
					if(sum[j]>=freq[j-1]) cout<<0;
					else if(sum[j]<freq[j-1]) cout<<1;
					cout<<"\n";	
				}
				else cout<<0;
//			}
//		else{
//			cout<<ch[i]<<"= ";
//				for(j=0;j<i;j++){
//					if(sum[j+1]==freq[j]){
//						cout<<1;
//					}
//					else if(sum[j+1]<freq[j]){
//						cout<<0;
//					}	
//				}
//				if(j+1<total_char){
//					if(sum[j+1]>=freq[j]) cout<<0;
//					else if(sum[j+1]<freq[j]) cout<<1;
//					cout<<"\n";	
//				}
//				else cout<<0;
//			}
//		}
		}
}
