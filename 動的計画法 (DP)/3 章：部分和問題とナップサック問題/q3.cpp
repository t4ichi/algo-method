#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n-1);
    for(int i = 0;i < n-1;i++) cin >> a[i];
    vector<int> b(n-1);
    for(int i = 0;i < n-1;i++) cin >> b[i];

    vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
    dp[0][0] = 0;
    for(int i = 0;i < n-1;i++){
        for(int j = 0;j <= m;j++){
            if(dp[i][j] == -1) continue;
            dp[i+1][j] = max(dp[i][j],dp[i+1][j]);
            if(j + a[i] <= m){
                dp[i+1][j+a[i]] = max(dp[i+1][j+a[i]],dp[i][j]+ b[i]);
            }
            
        }
    }

    cout << dp[n-1][m-1] << "\n";
}