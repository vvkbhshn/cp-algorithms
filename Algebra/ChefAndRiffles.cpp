//problem link: https://www.codechef.com/problems/RIFFLES?tab=statement

#include <bits/stdc++.h>
using namespace std;

void permute(vector<int> &arr, vector<int> &p, int n){
    vector<int> temp(n);
    for(int i=0;i<n;i++){
        temp[i]=arr[p[i]-1];
    }
    arr=temp;
}

vector<int> binpow(vector<int> p, int n, int k){
    vector<int> res;
    for(int i=1;i<=n;i++) res.push_back(i);
    while(k>0){
        if(k&1) permute(res,p,n);
        permute(p,p,n);
        k>>=1;
    }
    return res;
}


int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int> p;
	    for(int i=0,j=1; i<(n+1)/2; i++,j+=2) p.push_back(j);
	    for(int i=0,j=2; i<n/2; i++,j+=2) p.push_back(j);
	    vector<int> res=binpow(p,n,k);
	    for(auto x:res) cout<<x<<" ";
	    cout<<'\n';
	}
	return 0;
}