#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> left(n,-1),right(n,-1);
    for(int i = 0;i < n;i++){
        if(i > 0){
            left[i] = i - 1;
        }
        if(i + 1 < n){
            right[i] = i + 1;
        }
    }

    ll ans = 0;
    int dir = 1;

    while(true){
        left[right[k]] = left[k];
        right[left[k]] = right[k];

        if(s[k] == '<'){
            dir = -1;
        }
        else if(s[k] == '>'){
            dir = 1;
        }
        int next_k;
        if(dir == 1){
            next_k = right[k];
        }
        else if(dir == -1){
            next_k = left[k];
        }
        ans += abs(next_k - k);
        k = next_k;
        if(k == 0 || k == n - 1) break;
    }
    cout << ans << "\n";
}