//problem link: https://www.spoj.com/problems/CEQU/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int gcd(int a, int b){
	if(b==0) return a;
	return gcd(b,a%b);
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int a,b,c;
		cin>>a>>b>>c;
		if(c%gcd(a,b)==0) cout<<"Case "<<i<<": Yes\n";
		else cout<<"Case "<<i<<": No\n";
	}
	return 0;
}