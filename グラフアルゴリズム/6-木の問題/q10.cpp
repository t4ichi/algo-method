#include <bits/stdc++.h>
using namespace std;

void dfs(int v,vector<vector<int>> &children,vector<int> &parent,vector<bool> &iscovered,int &ans){
    for(auto nv : children[v]){
        dfs(nv,children,parent,iscovered,ans);
    }
    if(!iscovered[v]){
        iscovered[v] = iscovered[parent[v]] = true;
        ans++;
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
    vector<int> parent(n,-1);
    vector<bool> seen(n,false);
    queue<int> que;
    seen[0] = true;
    parent[0] = 0;
    que.push(0);

    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(auto nv : g[v]){
            if(seen[nv]) continue;
            children[v].push_back(nv);
            parent[nv] = v;
            seen[nv] = true;
            que.push(nv);
        }
    }
    vector<bool> iscoverd(n,false);
    int ans = 0;
    dfs(0,children,parent,iscoverd,ans);
    cout << ans << "\n";
}