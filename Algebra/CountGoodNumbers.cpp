//problem link: https://leetcode.com/problems/count-good-numbers/description/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution {
public:
    int m=1e9+7;

    ll pow(ll a, ll b){
        ll res=1;
        while(b>0){
            if(b&1) res=res*a%m;
            a=a*a%m;
            b>>=1;
        }
        return res;
    }

    int countGoodNumbers(ll n) {
        ll res;
        if(n%2==0) res=(pow(5,n/2)*pow(4,n/2))%m;
        else res=(pow(5,n/2+1)*pow(4,n/2))%m;
        return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    cin>>n;
    Solution ans;
    cout<<ans.countGoodNumbers(n);
    return 0;
}