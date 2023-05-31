#include <bits/stdc++.h>
using namespace std;

struct edge{
    int u,v,w;
};

int main(){
    int n,m;
    cin >> n >> m;
    vector<edge> g(m);
    for(int i = 0;i < m;i++){
        int u,v,w;
        cin >> u >> v >> w;
        g[i] = {u,v,-w};
    }
    const int INF = 1e9;
    vector<vector<int>> d(n+1,vector<int>(n,INF));
    d[0][0] = 0;

    for(int k = 1;k <= n;k++){
        d[k] = d[k-1];
        for(int i = 0;i < m;i++){
            int u = g[i].u;
            int v = g[i].v;
            int w = g[i].w;
            if(d[k][u] != INF){
                d[k][v] = min(d[k][v],d[k][u] + w);
            }
        }
    }
    int ans =  -d[n][n-1];
    cout << ans << "\n";
}