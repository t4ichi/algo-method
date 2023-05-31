#include <bits/stdc++.h>
using namespace std;
using P = pair<int,int>;

int main(){
    int n,m;
    cin >> n >> m;
    const int INF = 1001001001;
    vector<vector<P>> g(n);
    for(int i = 0;i < m;i++){
        int u,v,w;
        cin >> u >> v >> w;
        g[u].emplace_back(v,w);
    }

    for(int i = 0;i < n;i++){
        int ans = -1;
        int cur = INF;
        for(auto p : g[i]){
            if(p.second < cur){
                ans = p.first;
                cur = p.second;
            }
            else if(p.second == cur){
                ans = min(ans,p.first);
            }
        }
        cout << ans << "\n";
    }
}