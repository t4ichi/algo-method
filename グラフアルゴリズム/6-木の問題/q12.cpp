#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll mod = 998244353;

void dfs(int v,vector<vector<int>> &children,vector<ll> &dp1,vector<ll> &dp2){
    ll ans1 = 1;
    ll ans2 = 1;
    for(auto nv : children[v]){
        dfs(nv,children,dp1,dp2);
        ans1 *= dp2[nv];
        ans1 %= mod;

        ans2 *= (dp1[nv] + dp2[nv]);
        ans2 %=mod;
    }
    dp1[v] = ans1;
    dp2[v] = ans2;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> g(n);
    for(int i = 0;i < n-1;i++){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
    vector<vector<int>> children(n);
    vector<bool> seen(n,false);
    queue<int> que;
    seen[0] = true;
    que.push(0);

    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(auto nv : g[v]){
            if(seen[nv]) continue;
            children[v].push_back(nv);
            seen[v] = true;
            que.push(nv);
        }
    }

    vector<ll> dp1(n,0);
    vector<ll> dp2(n,0);
    dfs(0,children,dp1,dp2);
    ll ans = (dp1[0] + dp2[0]) % mod;
    cout << ans << "\n";
}