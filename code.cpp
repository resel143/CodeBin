#include<bits/stdc++.h>
#define ll long long int
#define l(i,a,b) for(ll i=a;i<b;i++)
#define PI 3.14159265358979323846
using namespace std;
int main(){
	ll n;
	cin>>n;
	ll a[n];
	l(i,0,n) cin>>a[i];
	ll l,r,m,e;
	cout<<"Enter element to search for:";
	cin>>e;
	l = 0;
	r = n-1;
	while(l<r){
		m=(l+r)/2;
		if(a[m]>e){
			r = m-1;
		}
		else if(a[m]<e) l = m+1;
		else{
			cout<<m<<"\n";
			break;
		}
	}
	if(l==r){
		if(a[l]==e){
			cout<<"Found at "<<l<<"\n";
		}
		else cout<<"Does not Exist!!\n";
	}
	else if(l>r){
		cout<<"Element does not exist!\n";
	}
}

