#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> g(n);
    for(int i = 0;i < n-1;i++){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    vector<int> d_max(n);
    for(int i = 0;i < n;i++){
        queue<int> que;
        vector<int> dist(n,-1);
        dist[i] = 0;
        que.push(i);
        while(!que.empty()){
            int p = que.front();
            que.pop();
            for(int v : g[p]){
                if(dist[v] != -1) continue;
                que.emplace(v);
                dist[v] = dist[p] + 1;
            }
        }
        d_max[i] = *max_element(dist.begin(),dist.end());
    }
    
    int ans = *max_element(d_max.begin(),d_max.end());
    cout << ans << "\n";
}