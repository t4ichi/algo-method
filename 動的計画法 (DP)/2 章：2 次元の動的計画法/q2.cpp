#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a(n,vector<int>(n));
    for(int i = 0;i < n;i++){
        cin >> a[0][i];
    }

    for(int i = 1;i < n;i++){
        for(int j = 0;j < n;j++){
            int sum = 0;
            if(j - 1 >= 0) sum += a[i-1][j-1];
            if(j + 1 < n) sum += a[i-1][j+1];
            sum += a[i-1][j];
            sum %= 100;
            a[i][j] = sum;
        }
    }
    cout << a[n-1][n-1] << "\n";
}