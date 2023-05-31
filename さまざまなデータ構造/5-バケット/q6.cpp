#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> cnt(1e5+1);
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
        cnt[a[i]]++;
    }

    ll par = (ll)n * (n-1) / 2;
    ll chl = 0;
    for(ll i : cnt){
        chl += i * (i-1) / 2;
    }

    double ans = (double)chl / par;
    cout << fixed << setprecision(10) << ans << "\n";
}