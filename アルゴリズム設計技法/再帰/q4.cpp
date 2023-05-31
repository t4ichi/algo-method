#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll f(ll n,vector<ll> &memo){
    if(memo[n] != -1) return memo[n];
    return memo[n] = f(n - 1,memo) + f(n - 2,memo);
}

int main(){
    ll n;
    cin >> n;
    vector<ll> memo(n+1,-1);
    memo[0] = 0;
    memo[1] = 1;
    cout << f(n,memo) << "\n";
}