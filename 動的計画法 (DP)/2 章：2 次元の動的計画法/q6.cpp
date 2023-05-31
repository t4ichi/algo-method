#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a(n,vector<int>(n));
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> a[i][j];
        }
    }

    vector<vector<int>> dp(n,vector<int>(n));
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(i - 1 >= 0 && j - 1 >= 0){
                dp[i][j] = a[i][j] + max(dp[i-1][j],dp[i][j-1]);
            }
            else if(i - 1 >= 0){
                dp[i][j] = a[i][j] + dp[i-1][j];
            }
            else if(j - 1 >= 0){
                dp[i][j] = a[i][j] + dp[i][j-1];
            }
            else{
                dp[i][j] = a[i][j];
            }
        }
    }
    cout << dp[n-1][n-1] << "\n";
}