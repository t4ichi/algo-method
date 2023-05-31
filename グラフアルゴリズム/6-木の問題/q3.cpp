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
    queue<int> que;
    vector<int> dist(n,-1);
    dist[0] = 0;
    que.push(0);
    while(!que.empty()){
        int p = que.front();
        que.pop();
        for(int v : g[p]){
            if(dist[v] != -1) continue;
            que.emplace(v);
            dist[v] = dist[p] + 1;
        }
    }
    int ans = 0;
    for(int i : dist){
        ans = max(ans,i);
    }
    cout << ans << "\n";
}