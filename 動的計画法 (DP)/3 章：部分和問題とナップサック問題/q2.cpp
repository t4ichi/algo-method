#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> w(n);
    for(int i = 0;i < n;i++) cin >> w[i];
    vector<vector<bool>> dp(n+1,vector<bool>(m+1));
    dp[0][0] = true;

    for(int i = 0;i < n;i++){
        for(int j = 0;j <= m;j++){
            if(!dp[i][j])continue;
            for(int k = 0;k < n;k++){
                if(j + w[k] <= m){
                    dp[i+1][j+w[k]] = true;
                }
            }
        }
    }
    cout << (dp[n][m] ? "Yes" : "No") << "\n";
}