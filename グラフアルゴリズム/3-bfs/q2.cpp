#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    for(int i = 0;i < m;i++){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int> dist(n,-1);
    dist[0] = 0;
    queue<int> que;
    que.push(0);

    while (!que.empty())
    {
        int v = que.front();
        que.pop();
        for(int i : g[v]){
            if(dist[i] != -1) continue;
            dist[i] = dist[v] + 1;
            que.push(i);
        }
    }
    int ans = 0;
    for(int i = 1;i < n;i++){
        ans = max(ans,dist[i]);
    }
    cout << ans << "\n";
}