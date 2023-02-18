//problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3671

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


ll binpow(ll a, ll b, ll m){
	ll res=1;
	a%=m;
	while(b>0){
		if(b&1) res=res*a%m;
		a=a*a%m;
		b>>=1;
	}
	return res;
}


int main(){
	debugMode();
	int t;
	cin>>t;
	while(t--){
		int a,b,x;
		cin>>a>>b>>x;
		cout<<binpow(a,b,x)<<'\n';
	}
	return 0;
}