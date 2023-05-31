#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    for(int i = 0;i < m;i++){
        int f,s;
        cin >> f >> s;
        g[f].push_back(s);
    }
    vector<int> dist(n,-1);
    vector<bool> finished(n);
    dist[0] = 0;
    queue<int> que;
    que.push(0);

    string ans = "No";
    while (!que.empty())
    {
        int v = que.front();
        que.pop();
        for(int i : g[v]){
            if(dist[i] != -1)continue;
            if(finished[i]){
                ans = "Yes";
                break;
            }
            dist[i] = dist[v] + 1;
        }
        finished[v] = true;
    }
    cout << ans << "\n";
}