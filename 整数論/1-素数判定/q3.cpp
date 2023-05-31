#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isP(ll n){
    if(n < 2){
        return false;
    }
    else{
        for(ll i = 2;i*i <= n;i++){
            if(n%i == 0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    ll n;
    cin >> n;
    cout << (isP(n) ? "Yes":"No") << "\n";
}