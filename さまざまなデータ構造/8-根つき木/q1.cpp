#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    vector<vector<int>> chl(n);
    for(int i = 1;i < n;i++){
        cin >> p[i];
        chl[p[i]].push_back(i);
    }

    int q;
    cin >> q;
    while(q > 0){
        q--;
        int v;
        cin >> v;
        for(int i : chl[p[v]]){
            cout << i << " ";
        }
        cout << "\n";
    }
}