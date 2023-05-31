#include <bits/stdc++.h>
using namespace std;

void rec(int v,int p,vector<vector<int>> &g,vector<int> &par,vector<vector<int>> &chl){
    for(int nv : g[v]){
        if(nv != p){
            par[nv] = v;
            chl[v].push_back(nv);
            rec(nv,v,g,par,chl);
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> g(n);
    for(int i = 1;i < n;i++){
        int a,b;
        cin >> a >> b;
        g[a].emplace_back(b);
        g[b].emplace_back(a);
    }
    vector<int> par(n);
    vector<vector<int>> chl(n);

    rec(0,0,g,par,chl);
    for(int i = 0;i < n;i++){
        sort(chl[i].begin(),chl[i].end());
    }

    int q;
    cin >> q;
    while(q > 0){
        q--;
        int v;
        cin >> v;
        for(int i : chl[par[v]]){
            cout << i << " ";
        }
        cout << "\n";
    }
}