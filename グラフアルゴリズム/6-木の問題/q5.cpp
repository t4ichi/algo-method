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

    vector<int> dist1(n,-1);
    queue<int> que;
    dist1[0] = 0;
    que.push(0);
    while(!que.empty()){
        int p = que.front();
        que.pop();
        for(int v : g[p]){
            if(dist1[v] != -1) continue;
            dist1[v] = dist1[p] + 1;
            que.emplace(v);
        }
    }
    int dist1_max = max_element(dist1.begin(),dist1.end()) - dist1.begin();
    
    vector<int> dist2(n,-1);
    dist2[dist1_max] = 0;
    que.push(dist1_max);
    while(!que.empty()){
        int p = que.front();
        que.pop();
        for(int v : g[p]){
            if(dist2[v] != -1) continue;
            dist2[v] = dist2[p] + 1;
            que.emplace(v);
        }
    }
    int dist2_max = *max_element(dist2.begin(),dist2.end());
    
    cout << dist2_max << "\n";
}