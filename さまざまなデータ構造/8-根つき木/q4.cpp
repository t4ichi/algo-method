#include <bits/stdc++.h>
using namespace std;

void rec(int v,vector<vector<int>> &chl){
    cout << v << " ";
    for(int i : chl[v]){
        rec(i,chl);
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<vector<int>> chl(n);
    for(int i = 1;i < n;i++){
        cin >> a[i];
        chl[a[i]].push_back(i);
    }
    rec(0,chl);
    cout << "\n";
}