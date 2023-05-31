#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());

    vector<int> cnt(5e5+1);
    int max_idx = 0;
    int max_val = -1;
    
    for(int i = 0;i < n;i++){
        int x = a[i];
        cnt[x]++;
        if(cnt[x] > max_val){
            max_val = cnt[x];
            max_idx = x;
        }
    }
    cout << max_idx << "\n"; 
}