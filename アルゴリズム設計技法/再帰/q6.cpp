#include <bits/stdc++.h>
using namespace std;

vector<int> a;
vector<vector<int>> memo;

bool f(int i,int sum){
    if(i == 0){
        if(sum == 0) return true;
        else return false;
    }
    if(sum < 0) return false;
    
    if(memo[i][sum] != -1) return memo[i][sum];

    if(f(i - 1,sum)) return memo[i][sum] = 1;
    if(f(i - 1,sum - a[i-1])) return memo[i][sum] = 1;
    return memo[i][sum] = 0;
}

int main(){
    int n,x;
    cin >> n >> x;
    a.resize(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    memo.resize(n + 1,vector<int>(x + 1,-1));
    if(f(n,x)){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
    }
}