#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n-1);
    for(int i = 0;i < n-1;i++) cin >> a[i];
    vector<vector<bool>> dp(n,vector<bool>(m));

    dp[0][0] = true;
    for(int i = 0;i < n-1;i++){
        for(int j = 0;j < m;j++){
            if(!dp[i][j])continue;
            dp[i+1][j] = true;
            if(j + a[i] < m){
                dp[i+1][j+a[i]] = true;
            }
        }
    }
    int ans = 0;
    for(int i = 0;i < m;i++){
        if(dp[n-1][i]) ans++;
    }
    cout << ans << "\n";
}