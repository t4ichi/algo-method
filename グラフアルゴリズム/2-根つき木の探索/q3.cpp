#include <bits/stdc++.h>
using namespace std;

void dfs(int num,int d,vector<vector<int>> &a,vector<int> &ans){
    ans[num] = d;
    for(int i : a[num]){
        dfs(i,d+1,a,ans);
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> ans(n);
    vector<vector<int>> a(n);
    for(int i = 1;i < n;i++){
        int p;
        cin >> p;
        a[p].push_back(i);
    }
    dfs(0,0,a,ans);
    for(int i = 0;i < n;i++){
        cout << ans[i] << "\n";
    }
}