#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> w(n);
    for(int i = 0;i < n;i++)cin >> w[i];
    int m = 0;
    for(int i = 0;i < n;i++)m += w[i];
    vector<vector<bool>> dp(n+1,vector<bool>(m+1));
    dp[0][0] = true;
    for(int i = 0;i < n;i++){
        for(int j = 0;j <= m;j++){
            if(!dp[i][j])continue;
            dp[i+1][j+w[i]] = true;
            dp[i+1][abs(j-w[i])] = true;
        }
    }
    int ans = 0;
    for(int i = 0;i <= m;i++){
        if(dp[n][i]){
            cout << i << "\n";
            return 0;
        }
    }
}