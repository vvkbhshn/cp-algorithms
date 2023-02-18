//problem link: https://www.spoj.com/problems/LASTDIG/

#include  <bits/stdc++.h>
using namespace std;

int binpow(int a, int b){
	int res=1;
	while(b>0){
		if(b&1) res=(res*a)%10;
		a=(a*a)%10;
		b>>=1;
	}
	return res;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		cout<<binpow(a,b)<<'\n';
	}
	return 0;
}