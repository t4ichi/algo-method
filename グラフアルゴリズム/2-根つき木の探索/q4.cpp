#include <bits/stdc++.h>
using namespace std;

void dfs(int n,int d,int &ans,vector<vector<int>> &a){
    ans = max(ans,d);
    for(int i : a[n]){
        dfs(i,d+1,ans,a);
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
    int ans = 0;
    dfs(0,0,ans,a);
    cout << ans << "\n";
}