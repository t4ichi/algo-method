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

int num(int i,int j,int h,int w){
    return (i * w + j);
}

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<int>> a(h,vector<int>(w-1));
    vector<vector<int>> b(h-1,vector<int>(w));
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w-1;j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0;i < h-1;i++){
        for(int j = 0;j < w;j++){
            cin >> b[i][j];
        }
    }
    int n = h * w;
    int m = (h - 1) * w + h * (w - 1);
    int sum_weight = 0;
    vector<edge> graph_edges;
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w-1;j++){
            int u = num(i,j,h,w);
            int v = num(i,j+1,h,w);
            graph_edges.push_back({u,v,a[i][j]});
            sum_weight += a[i][j];
        }
    }
    for(int i = 0;i < h-1;i++){
        for(int j = 0;j < w;j++){
            int u = num(i,j,h,w);
            int v = num(i+1,j,h,w);
            graph_edges.push_back({u,v,b[i][j]});
            sum_weight += b[i][j];
        }
    }

    sort(graph_edges.begin(),graph_edges.end(),comp);
    reverse(graph_edges.begin(),graph_edges.end());
    UnionFind uf(n);
    
    int ans = sum_weight;
    for(int i = 0;i < m;i++){
        auto [u,v,w] = graph_edges[i];
        if(uf.issame(u,v)) continue;
        uf.unite(u,v);
        ans -= w;
    }
    cout << ans << "\n";
}