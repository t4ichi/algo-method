#include <bits/stdc++.h>
using namespace std;

string ans = "Yes";
void dfs(int v,vector<int> &color,vector<vector<int>> &g){
    for(int i : g[v]){
        if(color[i] != -1){
            if(color[i] == color[v]){
                ans = "No";
            }
            continue;
        }
        color[i] = 1 - color[v];
        dfs(i,color,g);
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    for(int i = 0;i < m;i++){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    vector<int> color(n,-1);
    for(int i = 0;i < n;i++){
        if(color[i] != -1) continue;
        color[i] = 0;
        dfs(i,color,g);    
    }
    cout << ans << "\n";
}