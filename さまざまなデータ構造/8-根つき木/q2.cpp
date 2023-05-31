#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> par(n);
    vector<vector<int>> chl(n);

    for(int i = 1;i < n;i++){
        int a,b;
        cin >> a >> b;
        par[b] = a;
        chl[a].push_back(b);
    }
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