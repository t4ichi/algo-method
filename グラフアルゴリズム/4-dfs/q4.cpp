#include <bits/stdc++.h>
using namespace std;

int n,m;

void rec(int v,vector<vector<int>> &g,vector<bool> &isb){
    isb[v] = true;
    for(int i = 0;i < (int)g[v].size();i++){
        if(isb[g[v][i]])continue;
        rec(g[v][i],g,isb);
    }    
}

int main(){
    cin >> n >> m;
    vector<bool> isb(n);
    vector<vector<int>> g(n,vector<int>(m));

    for(int i = 0;i < m;i++){
        int a,b;
        cin >>  a >> b;
        g[a].push_back(b);
    }
    for(int i = 0;i < n;i++){
        sort(g[i].begin(),g[i].end());
    }
    rec(0,g,isb);

    int ans = 0;
    for (int i = 0; i < n; i++){
        if(!isb[i])ans++;
    }
    cout << ans << "\n";
}