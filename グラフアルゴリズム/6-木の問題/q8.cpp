#include <bits/stdc++.h>
using namespace std;

void dfs(int v,vector<vector<int>> &children,vector<int> &parent,vector<bool> &ismatched){
    for(auto nv : children[v]){
        dfs(nv,children,parent,ismatched);
    }
    if(parent[v] == -1) return;
    if(!ismatched[v] && !ismatched[parent[v]]){
        ismatched[v] = ismatched[parent[v]] = true;
    }
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> g(n);
    for(int i = 0;i < n;i++){
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
    vector<bool> ismatched(n,false);
    dfs(0,children,parent,ismatched);
    int ans = 0;
    for(int i = 0;i < n;i++){
        if(ismatched[i]){
            ans++;
        }
    }
    cout << ans / 2 << "\n";
}