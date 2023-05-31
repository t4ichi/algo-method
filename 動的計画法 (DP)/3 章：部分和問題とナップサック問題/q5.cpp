#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> w(n);
    for(int i = 0;i < n;i++)cin >> w[i];
    const int INF = 1001001;
    vector<vector<int>> dp(n+1,vector<int>(m+1,INF));
    dp[0][0] = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j <= m;j++){
            if(dp[i][j] == INF)continue;
            dp[i+1][j] = min(dp[i][j],dp[i+1][j]);
            if(j + w[i] <= m){
                dp[i+1][j+w[i]] = min(dp[i+1][j+w[i]],dp[i][j]+1);
            }
        }
    }
    if(dp[n][m] != INF){
        cout << dp[n][m] << "\n"; 
    }
    else{
        cout << -1 << "\n";
    }
}