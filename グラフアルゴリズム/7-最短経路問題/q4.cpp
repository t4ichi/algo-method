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
    const int INF = 1000000000;
    vector<int> d(n,INF);
    d[0] = 0;
    for(int i = 0;i < m;i++){
        int u = g[i].u;
        int v = g[i].v;
        int w = g[i].w;
        d[v] = min(d[v],d[u]+w);
    }

    for(int i = 0;i < n;i++){
        cout << d[i] << "\n";
    }
}