#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,num,count,j;
		cin>>n;
		char ch[n];
		cin>>ch;
		int kont=0;
		string str = "abacaba";
		for(i=0;ch[i]!='\0';i++){
			num=1,count=1;
			
			if(ch[i]==str[0]||ch[i]=='?'){
				if(ch[i]=='?') ch[i]=str[0];
				for(j=i+1;str[num]!='\n';j++){
					if(ch[j]=='?'||ch[j]==str[num++]){
						count++;
						if(ch[j]=='?'){
							if(num==7){
								ch[j]='z';
							}
							else ch[j]=str[num++];
						}
					}
					if(count==n){
						break;	
					} 
				}
				if(count==n){
					kont++;
				}
			}
			
		}
		if(kont==1){
			cout<<"YES\n";
			cout<<ch<<"\n";
		}
		else{
			cout<<"NO\n";
			cout<<kont<<"\n";
		}
	}
}
