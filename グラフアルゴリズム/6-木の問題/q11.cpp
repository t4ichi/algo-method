#include <bits/stdc++.h>
using namespace std;

void dfs(int v,vector<vector<int>> &children,vector<int> &w,vector<int> &dp1,vector<int> &dp2){
    int ans1 = w[v];
    int ans2 = 0;
    for(auto nv : children[v]){
        dfs(nv,children,w,dp1,dp2);
        ans1 += dp2[nv];
        ans2 += max(dp1[nv],dp2[nv]);
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
    vector<int> w(n);
    for(int i = 0;i < n;i++) cin >> w[i];

    vector<vector<int>> children(n);
    vector<int> seen(n,false);
    queue<int> que;
    seen[0] = true;
    que.push(0);
    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(auto nv : g[v]){
            if(seen[nv]) continue;
            children[v].push_back(nv);
            seen[nv] = true;
            que.push(nv);
        }
    }

    vector<int> dp1(n,0);
    vector<int> dp2(n,0);
    dfs(0,children,w,dp1,dp2);
    int ans = max(dp1[0],dp2[0]);
    cout << ans << "\n";
}