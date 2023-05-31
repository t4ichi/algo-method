#include <bits/stdc++.h>
using namespace std;

void rec(int v,vector<vector<int>> &g,vector<bool> &isb){
    isb[v] = true;
    for(int i = 0;i < (int)g[v].size();i++){
        if(isb[g[v][i]])continue;
        rec(g[v][i],g,isb);
    }    
}

int main(){
    int n,m;
    cin >> n >> m;
    vector<bool> isb(n);
    vector<vector<int>> g(n,vector<int>(m));

    for(int i = 0;i < m;i++){
        int a,b;
        cin >>  a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for(int i = 0;i < n;i++){
        sort(g[i].begin(),g[i].end());
    }

    int ans = 0;
    for(int i = 0;i < n;i++){
        if(isb[i]) continue;
        rec(i,g,isb);
        ans++;
    }
    cout << ans << "\n";
}