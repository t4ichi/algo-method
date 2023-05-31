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
        g[i] = {u,v,w};
    }
    const int INF = 1e9;
    vector<vector<int>> d(n+1,vector<int>(n,INF));
    d[0][0] = 0;
    vector<int> pre(n,-1);

    for(int k = 1;k <= n;k++){
        d[k] = d[k-1];
        for(int i = 0;i < m;i++){
            int u = g[i].u;
            int v = g[i].v;
            int w = g[i].w;
            if(d[k][u] != INF){
                if(d[k][u]+w < d[k][v]){
                    d[k][v] = d[k][u]+w;
                    pre[v] = u;
                }       
            }
        }
    }
    vector<int> ans;
    int cur = n-1;
    while (cur != -1){
        ans.push_back(cur);    
        cur = pre[cur];
    }
    reverse(ans.begin(),ans.end());

    cout << ans.size() << "\n";
    for(int i = 0;i < (int)ans.size();i++){
        cout << ans[i];
        if(i != (int)ans.size()-1){
            cout << " ";
        }
    }
    cout << "\n";
}