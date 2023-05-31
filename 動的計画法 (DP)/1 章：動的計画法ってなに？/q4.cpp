#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> dp(n+1);
    dp[0] = 1;
    for(int i = 1;i <= n;i++){
        dp[i] += dp[i-1];
        if(i-2 >= 0){
            dp[i] += dp[i-2];
        }
        if(i-3 >= 0){
            dp[i] += dp[i-3];
        }
    }
    cout << dp[n] << "\n";
}