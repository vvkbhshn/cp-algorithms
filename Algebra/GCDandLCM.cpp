//problem link: https://www.codechef.com/problems/FLOW016?tab=statement

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int calculateGCD(int a, int b){
    if(b==0) return a;
    return calculateGCD(b, a%b);
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    ll a,b;
	    cin>>a>>b;
	    ll gcd=calculateGCD(a,b);
	    ll lcm=(a/gcd)*b;
	    cout<<gcd<<" "<<lcm<<'\n';
	}
	return 0;
}
