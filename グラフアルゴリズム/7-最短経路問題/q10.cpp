#include <bits/stdc++.h>
using namespace std;

struct edge{
    int u,v,w;
};

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<edge>> g(n);
    for(int i = 0;i < m;i++){
        int u,v,w;
        cin >> u >> v >> w;
        g[u].push_back({u,v,w});
    }
    const int INF = 1e9;
    vector<int> d(n,INF);
    vector<bool> used(n);
    d[0] = 0;

    while (true){
        int v = -1;
        for(int i = 0;i < n;i++){
            if(!used[i] && (v == -1 || d[i] < d[v])){
                v = i;
            }
        }
        if(v == -1) break;
        used[v] = true;
        for(auto e : g[v]){
            d[e.v] = min(d[e.v],d[v] + e.w);
        }
    }
    for(int i = 0;i < n;i++){
        cout << d[i] << "\n";
    }
}