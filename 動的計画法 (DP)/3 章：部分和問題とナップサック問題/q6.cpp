#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    vector<int> x(n);
    for(int i = 0;i < n;i++)cin >> x[i];

    vector<vector<bool>> dp(n+1,vector<bool>(a+1));
    dp[0][0] = true;
    for(int i = 0;i < n;i++){
        for(int j = 0;j <= a;j++){
            if(!dp[i][j])continue;
            dp[i+1][j] = true;
            dp[i+1][(j+x[i])%a] = true;
        }
    }
    for(int i = 0;i <= n;i++){
        if(dp[i][b]){
            cout << "Yes" << "\n";
            return 0;
        }
    }
    
    cout << "No" << "\n";
}