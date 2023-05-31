#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    vector<int> dp(n);
    dp[0] = 0;
    dp[1] = a[1];
    for (int i = 2; i < n; i++)
    {
        dp[i] = min(dp[i-2]+a[i]*2,dp[i-1] + a[i]);
    }
    cout << dp[n-1] << "\n";
}