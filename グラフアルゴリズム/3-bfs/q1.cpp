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
    vector<vector<int>> nodes(n);
    nodes[0].push_back(0);

    for(int i = 1;i < n;i++){
        for(auto j : nodes[i-1]){
            for(auto k :g[j]){
                if(dist[k] != -1){
                    continue;
                }
                dist[k] = dist[j] + 1;
                nodes[i].push_back(k);  
            }
        }
    }
    for(int i = 0;i < n;i++){
        sort(nodes[i].begin(),nodes[i].end());
        for(int j : nodes[i]){
            cout << j << " ";
        }
        cout << "\n";
    }
}