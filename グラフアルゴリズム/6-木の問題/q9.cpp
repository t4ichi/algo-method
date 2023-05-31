#include <bits/stdc++.h>
using namespace std;

void dfs(int v,vector<vector<int>> &children,vector<bool> &ischosen){
    int cnt = 0;
    for(auto nv : children[v]){
        dfs(nv,children,ischosen);
        if(!ischosen[nv]){
            cnt++;
        }
    }
    if(cnt >= 1){
        ischosen[v] = true;
    }
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
            seen[nv] = true;
            que.push(nv);
        }
    }
    vector<bool> ischosen(n,false);
    dfs(0,children,ischosen);
    int ans = 0;
    for(int i = 0;i < n;i++){
        if(ischosen[i]){
            ans++;
        }
    }
    cout << ans << "\n";
}