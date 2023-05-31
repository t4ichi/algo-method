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
    int idx = 0;
    int size = -1;
    for(int i = 0;i < n;i++){
        if((int)g[i].size() > size){
            idx = i;
            size = g[i].size();
        }
    }
    sort(g[idx].begin(),g[idx].end());
    for(int i : g[idx]){
        cout << i << " ";
    }
    cout << "\n";
}