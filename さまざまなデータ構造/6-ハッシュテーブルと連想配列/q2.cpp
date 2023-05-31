#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int b = 30;
const int m = 1000003;

ll p[10];
void init(){
    p[0] = 1;
    for(int i = 1;i < 10;i++){
        p[i] = b * p[i-1] % m;
    }
}

int hash30(string s){
    ll ret = 0;
    int len = s.size();
    for(int i = 0;i < len;i++){
        ret += (s[len-1-i] - 'a' + 1) * p[i];
        ret %= m;
    }
    return ret;
}    

int main(){
    init();
    int n;
    cin >> n;
    vector<int> cnt(m);
    int ans = 0;
    for(int i = 0;i < n;i++){
        string s;
        cin >> s;
        int idx = hash30(s);
        cnt[idx]++;
        ans = max(ans,cnt[idx]);
    }
    cout << ans << "\n";
}