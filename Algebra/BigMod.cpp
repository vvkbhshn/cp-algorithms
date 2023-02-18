//problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=310

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
	ll b,p,m;
	while(cin>>b>>p>>m)	cout<<binpow(b,p,m)<<'\n';
	return 0;
} 