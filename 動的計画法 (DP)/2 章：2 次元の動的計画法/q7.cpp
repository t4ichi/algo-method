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
    vector<vector<int>> dp(n, vector<int>(n));
    dp[0][n-1] = a[0][n-1];
    for(int i = 0;i < n;i++){
        for(int j = n-1;j >= 0;j--){
            if(j + 1 < n && i - 1  >= 0){
                dp[i][j] = a[i][j] + min(dp[i-1][j],dp[i][j+1]);
            }
            else if(j + 1 < n){
                dp[i][j] = a[i][j] + dp[i][j+1];
            }
            else if(i - 1 >= 0){
                dp[i][j] = a[i][j] + dp[i-1][j];
            }
        }   
    }
    cout << dp[n-1][0] << "\n";
}