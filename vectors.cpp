#include<bits/stdc++.h>
#include<iostream>
#include<string>
#define ll long long int
#define l(i,a,b) for(ll i=a;i<b;i++)
#define PI 3.14159265358979323846
using namespace std;
int main(){
	ll k;
	cin>>k;
	string s = "7";
	ll n = (ll)stoi(s);
  ll cont = 1;
  if(k%10==3||k%10==9||k%10==1||k%10==7){
	while(n%k&&n<777777){
		s.append(1,'7');
		n = (ll)stoi(s);
		cont++;	
 	 }
	}
	else cout<<-1<<"\n";	
}
