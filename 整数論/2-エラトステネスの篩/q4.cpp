#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<bool> primes(n+2,true);
    primes[0] = primes[1] = false;

    for(int i = 0;i <= n;i++){
        if(primes[i]){
            for(int j = 2*i;j <= n;j+=i){
                primes[j] = false;
            }
        }
    }
    int ans = 0;
    for(int i = 2;i+2 <= n;i++){
        if(primes[i] && primes[i+2])ans++;
    }
    cout << ans << "\n";
}