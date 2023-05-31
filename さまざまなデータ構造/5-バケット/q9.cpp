#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];

    vector<int> cnt(2e6+1);
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            int k = a[i] * a[i] + a[j] * a[j];
            cnt[k] = 1;
        }
    }

    for(int i = 0;i <= 2e6;i++){
        if(i > m)continue;
        if(cnt[i] == 1 && cnt[m-i] == 1){
            cout << "Yes" << "\n";
            return 0;
        }
    }
    cout << "No" << "\n";
}