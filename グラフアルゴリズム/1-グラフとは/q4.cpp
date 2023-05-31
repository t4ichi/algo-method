#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,x;
    cin >> n >> m >> x;
    vector<vector<int>> g(n);
    for(int i = 0;i < m;i++){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    set<int> ans;
    for(int i : g[x]){
        for(int j : g[i]){
            if(find(g[x].begin(),g[x].end(),j) == g[x].end() && j != x){
                ans.insert(j);
            }
        }
    }
    cout << ans.size() << "\n";
}