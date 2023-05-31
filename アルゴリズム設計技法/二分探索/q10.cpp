#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n,x;
    cin >> n >> x;
    
    ll ok = -1;
    ll ng = n * n + 1;

    auto isOK = [&](ll mid){
        ll cnt = 0;
        for(int i = 0;i < n;i++){
            cnt += min(n,mid/(i + 1));
        }
        return (cnt < x);
    };
    while(ng - ok > 1){
        ll mid = (ng + ok) / 2;

        if(isOK(mid)){
            ok = mid;
        }
        else{
            ng = mid;
        }
    }
    cout << ok+1 << "\n";
}