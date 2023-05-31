#include <bits/stdc++.h>
using namespace std;

int n,m,s,t;

void dfs(int v,vector<bool> &seen,vector<vector<int>> &g){
    seen[v] = true;
    for(int i : g[v]){
        if(seen[i]) continue;
        dfs(i,seen,g);
    }
}

int main(){
    cin >> n >> m >> s >> t;
    vector<vector<int>> g(n);
    for(int i = 0;i < m;i++){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
    }
    vector<bool> seen(n);
    dfs(s,seen,g);
    if(seen[t]){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
    }
}