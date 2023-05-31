#include <bits/stdc++.h>
using namespace std;

void dfs(int n,vector<vector<int>> &a){
    cout << n << " ";
    for(int i : a[n]){
        dfs(i,a);
    }
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a(n);

    for(int i = 1;i < n;i++){
        int p;
        cin >> p;
        a[p].push_back(i);
    }
    dfs(0,a);
    cout << "\n";
}