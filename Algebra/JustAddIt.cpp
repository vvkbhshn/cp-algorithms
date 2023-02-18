//problem link: https://www.spoj.com/problems/ZSUM/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mod=1e7+7;

ll binpow(ll a, ll b){
	ll res=1;
	a%=mod;
	while(b>0){
		if(b&1) res=res*a%mod;
		a=a*a%mod;
		b>>=1;
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	ll n,k;
	while(cin>>n>>k){
		if(n==0 && k==0) break;
		ll res=(2*binpow(n-1,k)+binpow(n,k)+2*binpow(n-1,n-1)+binpow(n,n))%mod;
		cout<<res<<'\n';
	}
	return 0;
}