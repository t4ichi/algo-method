#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    ll m;
    cin >> n >> m;
    vector<ll> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    map<ll,int> mp;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            ll v = a[i] * a[i] + a[j] * a[j];
            mp[v] = 1;
        }
    }
    
    for(auto x : mp){
        ll v = m - x.first;
        if(v < 0)continue;
        if(mp.count(v) == 1){
            cout << "Yes" << "\n";
            return 0;
        }
    }
    cout << "No" << "\n";
}