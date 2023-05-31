#include <bits/stdc++.h>
using namespace std;

struct edge{
    int u;
    int v;
    int w;
};

int main(){
    int n,m;
    cin >> n >> m;
    vector<edge> g(m);
    for(int i = 0;i < m;i++){
        int u,v,w;
        cin >> u >> v >> w;
        g[i] = {u,v,w};
    }
    const int INF = 1e9;
    vector<vector<int>> d(n+1,vector<int>(n,INF));
    d[0][0] = 0;
    int cnt = 0;
    for(int k = 1;k <= n;k++){
        d[k] = d[k-1];
        for(int i = 0;i < m;i++){
            int u = g[i].u;
            int v = g[i].v;
            int w = g[i].w;
            if(d[k][u] < INF){
                d[k][v] = min(d[k][v],d[k][u]+w);
            }
        }
    }
    for(int i = 0;i < n;i++){
        if(d[n][i] != d[n-1][i]){
            d[n][i] = -INF;
        }
    }

    vector<vector<int>> d2(n+1,vector<int>(n,INF));
    d2[0] = d[n];
    for(int k = 1;k <= n;k++){
        d2[k] = d2[k-1];
        for(int i = 0;i < m;i++){
            int u = g[i].u;
            int v = g[i].v;
            int w = g[i].w;
            if(d2[k][u] == -INF){
                d2[k][v] = -INF;
            }
        }
    }
    int ans = d2[n][n-1];
    if(ans == INF){
        cout << "impossible" << "\n";
    }
    else if(ans == -INF){
        cout << "-inf" << "\n";
    }
    else{
        cout << ans << "\n";
    }
}