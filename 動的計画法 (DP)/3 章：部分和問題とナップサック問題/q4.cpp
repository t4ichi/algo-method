#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> w(n),v(n);
    for(int i = 0;i < n;i++)cin >> w[i];
    for(int i = 0;i < n;i++)cin >> v[i];

    vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
    dp[0][0] = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j <= m;j++){
            if(dp[i][j] == -1)continue;
            dp[i+1][j] = max(dp[i+1][j],dp[i][j]);
            if(j + w[i] <= m){
                dp[i+1][j+w[i]] = max(dp[i][j]+v[i],dp[i+1][j+w[i]]);
            }
        }
    }
    int ans = 0;
    for(int i = 0;i <= m;i++){
        ans = max(dp[n][i],ans);
    }

    if(ans == -1){
        cout << 0 << "\n";
    }
    else{
        cout << ans << "\n";
    }
}