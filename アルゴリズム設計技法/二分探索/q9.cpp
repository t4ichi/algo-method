#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n,k;
    cin >> n >> k;

    ll cnt = 0;
    for(int i = 0;i < n;i++){
        cnt += min(n,k / (i + 1));
    }
    cout << cnt << "\n";
}