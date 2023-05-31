#include <bits/stdc++.h>
using namespace std;

int rec(int v,vector<vector<int>> &chl){
    int ans = chl[v].size();
    for(int i : chl[v]){
        ans += rec(i,chl);
    }
    return ans;
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
    int v;
    cin >> v;
    cout << rec(v,chl) << "\n";
}