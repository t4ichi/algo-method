#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i = 0;i < n;i++) cin >> s[i];

    vector<vector<int>> dp(n,vector<int>(n));
    dp[0][0] = 1;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(i - 1 >= 0 && s[i][j] == '.'){
                dp[i][j] += dp[i-1][j];
            }
            if(j - 1>= 0 && s[i][j] == '.'){
                dp[i][j] += dp[i][j-1];
            }
        }
    }
    cout << dp[n-1][n-1] << "\n";
}