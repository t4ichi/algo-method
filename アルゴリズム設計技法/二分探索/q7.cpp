#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isOK(ll x,ll idx){
    ll n = idx * (idx + 1) / 2;
    return n >= (ll)x;
}

int main(){
    int n;
    cin >> n;
    vector<ll> x(n);
    for(int i = 0;i < n;i++)cin >> x[i];
    
    for(int i = 0;i < n;i++){
        ll ng = -1;
        ll ok = 2e9;
        while(abs(ok - ng) > 1){
            ll mid = (ng + ok) / 2;
            if(isOK(x[i],mid)){
                ok = mid;
            }
            else{
                ng = mid;
            }
        }
        cout << ok << "\n";
    }
}