#include <bits/stdc++.h>
using namespace std;

int rec(int v,vector<vector<int>> &chl,vector<int> &memo){
    if(memo[v] != -1) return memo[v];
    int ans = chl[v].size();
    for(int i : chl[v]){
        ans += rec(i,chl,memo);
    }
    return memo[v] = ans;
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
    vector<int> memo(n,-1);
    int q;
    cin >> q;
    while(q > 0){
        q--;
        int v;
        cin >> v;
        cout << rec(v,chl,memo) << "\n";
    }
}