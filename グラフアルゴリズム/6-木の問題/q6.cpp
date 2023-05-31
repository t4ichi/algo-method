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

    int siz = g.size();
    vector<int> dist_r(siz,-1);
    queue<int> que;
    int r = 0;
    dist_r[r] = 0;
    que.push(r);
    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(auto nv : g[v]){
            if(dist_r[nv] != -1) continue;
            dist_r[nv] = dist_r[v] + 1;
            que.push(nv); 
        }
    }

    int s = max_element(dist_r.begin(),dist_r.end()) - dist_r.begin();
    vector<int> dist_s(siz,-1);
    dist_s[s] = 0;
    que.push(s);
    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(auto nv : g[v]){
            if(dist_s[nv] != -1) continue;
            dist_s[nv] = dist_s[v] + 1;
            que.push(nv);
        }
    }
    int diam = *max_element(dist_s.begin(),dist_s.end());
    int ans = (diam + 1) / 2;
    cout << ans << "\n";
}