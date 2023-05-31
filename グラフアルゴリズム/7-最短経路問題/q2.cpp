#include <bits/stdc++.h>
using namespace std;
using P = pair<int,int>;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<P>> g(n);
    for(int i = 0;i < m;i++){
        int u,v,w;
        cin >> u >> v >> w;
        g[v].emplace_back(u,w);
    }
    const int INF = 1001001001;
    vector<int> d(n,INF);
    d[0] = 0;
    for(int i = 1;i < n;i++){
        for(auto v : g[i]){
            d[i] = min(d[i],v.second + d[v.first]);
        }
    }

    if(d[n-1] != INF){
        cout << d[n-1] << "\n";
    }
    else{
        cout << -1 << "\n";
    }
}