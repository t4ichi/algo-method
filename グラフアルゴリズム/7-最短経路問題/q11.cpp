#include <bits/stdc++.h>
using namespace std;
using P = pair<int,int>;

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
    d[0] = 0;
    vector<bool> used(n);
    priority_queue<P,vector<P>,greater<P>> que;
    
    for(int i = 0;i < n;i++){
        que.emplace(d[i],i);
    }

    while (!que.empty()){
        P p = que.top();
        que.pop();
        if(used[p.second]) continue;
        used[p.second] = true;
        for(auto e : g[p.second]){
            if(d[e.v] > d[p.second] + e.w){
                d[e.v] = d[p.second] + e.w;
                que.emplace(d[e.v],e.v);
            }
        }
    }
    for(int i = 0;i < n;i++){
        cout << d[i] << "\n";
    }
}