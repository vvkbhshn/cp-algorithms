//problem link: https://www.spoj.com/problems/LOCKER/

#include  <bits/stdc++.h>
using namespace std;
 
int m=1e9+7;
 
long long binpow(long long a, long long b){
	long long res=1;
	while(b>0){
		if(b&1) res=(res*a)%m;
		a=(a*a)%m;
		b>>=1;
	}
	return res%m;
}
 
 
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(n%3==0) cout<<binpow(3,n/3);
		else if(n%3==1){
			if(n==1) cout<<1;
			else cout<<binpow(3,(n/3)-1)*4%m;
		}
		else cout<<binpow(3,n/3)*2%m;
		cout<<'\n';
	}
	return 0;
} 