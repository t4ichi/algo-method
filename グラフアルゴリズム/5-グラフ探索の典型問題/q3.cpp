#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,s,t;
    cin >> n >> m >> s >> t;
    vector<vector<int>> g(n);
    for(int i = 0;i < m;i++){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
    }

    vector<int> dist(n,-1);
    dist[s] = 0;
    queue<int> que;
    que.push(s);

    vector<int> prev(n,-1);
    while (!que.empty())
    {
        int v = que.front();
        que.pop();
        for(int i : g[v]){
            if(dist[i] != -1) continue;
            dist[i] = dist[v] + 1;
            que.emplace(i);
            prev[i] = v;
        }
    }
    int cur = t;
    vector<int> ans;
    while (cur != -1)
    {
        ans.push_back(cur);
        cur = prev[cur];
    }
    reverse(ans.begin(),ans.end());
    cout << ans.size() << "\n";
    for(int i = 0;i < (int)ans.size();i++){
        cout << ans[i];
        if(i != (int)ans.size() - 1){
            cout << " ";
        }
    }
    cout << "\n";
}