#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
    vector<int> par, rank, siz;
    vector<long long> weight;
    UnionFind(int n) : par(n,-1), rank(n,0), siz(n,1),weight(n) {
      for(int i = 0;i < n;i++){
        int w;
        cin >> w;
        weight[i] = w;
      }
    }

    int root(int x) {
      if (par[x]==-1) return x;
      else return par[x] = root(par[x]);
    }

    bool issame(int x, int y) {
      return root(x)==root(y);
    }

    bool unite(int x, int y) {
      int rx = root(x), ry = root(y);
      if (rx==ry) return false;
      if (rank[rx]<rank[ry]) swap(rx, ry);
      par[ry] = rx;
      if (rank[rx]==rank[ry]) rank[rx]++;
      siz[rx] += siz[ry];

      weight[rx] = weight[rx] + weight[ry];
      return true;
    }

    int size(int x) {
      return siz[root(x)];
    }

    long long get_weight(int x){
      return weight[root(x)];
    }
};

int main(){
  int n,q;
  cin >> n >> q;
  UnionFind uf(n);
  for(int i = 0;i < q;i++){
    int t,x,y;
    cin >> t >> x >> y;
    if(t == 0){
      uf.unite(x,y);
    }
    else{
      cout << uf.get_weight(x) << "\n";
    }
  }
}