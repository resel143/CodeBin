#include<bits/stdc++.h>
#define ll long long int
#define l(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
ll stn(string str,int i){
	 return str[i]-48;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		string a[n],b[n];
		l(i,0,n){
			cin>>a[i]>>b[i];
		}
		char mae,mbe;
		int ha1=0,ha2=0,ma1=0,ma2=0,hb1=0,hb2=0,mb1=0,mb2=0;
		l(i,0,n){
			ha1 =stn(a,0);
		ha2 = stn(a,1)
		ma1 = stn(a,3);
		ma2 = stn(a,4);
		me = a[6];
		int h1=0,h2=0,m1=0,m2=0;
		hb1 =str[0]-48;
		hb2 = str[1]-48;
		mb1 = str[3]-48;
		mb2 = str[4] - 48;
		mbe = b[6];
		}
	}
}
