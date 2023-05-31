#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> d(m);
    for(int i = 0;i < m;i++) cin >> d[i];
    
    vector<bool> dp(n+1);
    dp[0] = true;
    for(int i = 1;i <= n;i++){
        for(int j = 0;j < m;j++){
            if(i - d[j] >= 0 && dp[i - d[j]]){
                dp[i] = true; 
            }
        }
    }
    cout << (dp[n]? "Yes": "No") << "\n";
}