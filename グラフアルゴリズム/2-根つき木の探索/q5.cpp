#include <bits/stdc++.h>
using namespace std;

void dfs(int n,vector<int> &ans,vector<vector<int>> &a){
    for(int i : a[n]){
        dfs(i,ans,a);
    }
    ans[n] = 1;
    for(int i : a[n]){
        ans[n] += ans[i];
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
    vector<int> ans(n);
    dfs(0,ans,a);
    for(int i = 0;i < n;i++){
        cout << ans[i]-1 << "\n";
    }
}