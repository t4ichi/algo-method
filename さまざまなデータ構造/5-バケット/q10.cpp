#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    vector<int> cnt(5e5+1);
    for(int i = 0;i < n;i++){
         cin >> a[i];
         cnt[a[i]]++;
    }


    vector<int> memo(5e5+1,-1);
    int q;
    cin >> q;
    while(q > 0){
        q--;
        int x;
        cin >> x;
        if(memo[x] != -1){
            cout << memo[x] << "\n";
            continue;
        }
        int ans = 0;
        for(int i = x;i <= 5e5;i += x){
            ans += cnt[i];
        }
        memo[x] = ans;
        cout << memo[x] << "\n";
    }
}