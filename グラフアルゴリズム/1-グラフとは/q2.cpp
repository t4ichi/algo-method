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
    }
    for(int i = 0;i < n;i++){
        sort(g[i].begin(),g[i].end());
        for(int j : g[i]){
            cout << j << " ";
        }
        cout << "\n";
    }
}