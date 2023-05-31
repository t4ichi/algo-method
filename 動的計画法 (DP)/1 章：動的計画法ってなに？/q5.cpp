#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];

    vector<int> dp(n,1001001);
    dp[0] = 0;
    for(int i = 1;i < n;i++){
        for(int j = 1;j <= m;j++){
            if(i-j >= 0){
                dp[i] = min(dp[i],dp[i-j] + a[i] * j);
            }
        }
    }
    cout << dp[n-1] << "\n";
}