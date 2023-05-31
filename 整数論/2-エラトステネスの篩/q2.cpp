#include <bits/stdc++.h>
using namespace std;

void f(int n,vector<bool> &primes){
    for(int i = 2*n;i <= 100;i+=n){
        primes[i] = false;
    }
}

bool isP(int n){
    if(n < 2) return false;
    for(int i = 2;i*i <= n;i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){
    vector<bool> primes(105,true);
    primes[0] = primes[1] = false;
    
    f(2,primes);f(3,primes);f(5,primes);
    int ans = 0;
    for(int i = 0;i <= 100;i++){
        if(primes[i] && !isP(i)) ans++;
    }
    cout << ans << "\n";
}