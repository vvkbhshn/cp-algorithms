#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll binpow(ll a, ll b){
	ll res=1;
	while(b>0){
		if(b&1) res=res*a;
		a=a*a;
		b>>=1;
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	ll n;
	cin>>n;
	ll res=binpow(2,2*n-3)*3+3*3*binpow(2,2*n-6)*(n-3);
	cout<<res;
	return 0;
}