#include <bits/stdc++.h>
using namespace std;

void dfs(int v,vector<bool> &seen,vector<vector<int>> &g,vector<int> &prev){
    seen[v] = true;
    for(int i : g[v]){
        if(seen[i]) continue;
        dfs(i,seen,g,prev);
        prev[i] = v;
    }
}

int main(){
    int n,m,s,t;
    cin >> n >> m >> s >> t;
    vector<vector<int>> g(n);
    for(int i = 0;i < m;i++){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
    }
    vector<bool> seen(n);
    vector<int> prev(n,-1);
    dfs(s,seen,g,prev);

    vector<int> ans;
    int cur = t;
    while (cur != -1){
        ans.push_back(cur);
        cur = prev[cur];
    }
    reverse(ans.begin(),ans.end());
    cout << ans.size() << "\n";
    for(int i = 0;i < (int)ans.size();i++){
        cout << ans[i];
        if(i != ans.size() - 1){
            cout << " "; 
        } 
    }
    cout << "\n";
}