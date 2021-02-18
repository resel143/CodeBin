#include<bits/stdc++.h>
#define ll long long int
#define l(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
int main(){
	ll a,n,c[n];
	cin>>n>>a;
	l(i,0,n){
		cin>>c[i];
	}
	l(i,0,n){
		if(c[i]!=a){
			cout<<c[i]<<" ";
		}
	}
}
