#include <bits/stdc++.h>
using namespace std;

struct edge {
    int from;
    int to;
    int leng;
};

bool comp(const edge &e, const edge &f) {
    return e.leng < f.leng;
}

struct UnionFind {
    vector<int> par, siz;

    UnionFind(int n) : par(n), siz(n, 1) {
        for(int i = 0; i < n; ++i) {par[i] = i;}
    }

    int root(int x) {
        if(par[x] == x) {return x;}
        return par[x] = root(par[x]);
    }

    bool issame(int x, int y) {
        return root(x) == root(y);
    }

    bool unite(int x, int y) {
        int rx = root(x), ry = root(y);
        if (rx == ry) return false;
        if (siz[rx] < siz[ry]) swap(rx, ry);
        par[ry] = rx;
        siz[rx] += siz[ry];
        return true;
    }

    int size(int x) {
        return siz[root(x)];
    }
};

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<edge> graph_edges(m);
    for(int i = 0;i < m;i++){
        int u,v,w;
        cin >> u >> v >> w;
        graph_edges[i] = {u,v,w};
    }
    sort(graph_edges.begin(),graph_edges.end(),comp);
    UnionFind uf(n);

    int ans = 0;
    int chosen_num = 0;
    for(int i = 0;i < m;i++){
        auto [u,v,w] = graph_edges[i];
        if(chosen_num >= k) continue;
        
        if(uf.issame(u,v)) continue;
        uf.unite(u,v);
        ans += w;
        chosen_num++;
    }
    if(chosen_num < k){
        ans = -1;
    }
    cout << ans << "\n";
}