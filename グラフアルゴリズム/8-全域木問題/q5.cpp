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
    int n,m;
    cin >> n >> m;
    vector<edge> graph_edges(m);
    for(int i = 0;i < m;i++){
        int u,v,w;
        cin >> u >> v >> w;
        graph_edges[i] = {u,v,w};
    }
    sort(graph_edges.begin(),graph_edges.end(),comp);
    UnionFind uf(n);
    
    int W = 0;
    vector<int> used_edges;
    for(int i = 0;i < m;i++){
        auto [u,v,w] = graph_edges[i];
        if(uf.issame(u,v)) continue;
        uf.unite(u,v);
        W += w;
        used_edges.push_back(i);
    }

    int ans = 0;
    for(auto e : used_edges){
        UnionFind uf_sub(n);
        int w_sub = 0;
        for(int i = 0;i < m;i++){
            auto [u,v,w] = graph_edges[i];
            if(i == e) continue;
            if(uf_sub.issame(u,v)) continue;
            uf_sub.unite(u,v);
            w_sub += w;
        }
        if(uf_sub.size(0) < n || w_sub > W){
            ans++;
        }
    }
    cout << ans << "\n";
}