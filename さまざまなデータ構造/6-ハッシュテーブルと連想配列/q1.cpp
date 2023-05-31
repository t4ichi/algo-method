#include <bits/stdc++.h>
using namespace std;

const int p[] = {1,30,30*30,30*30*30};

int hash30(string& s){
    int ret = 0;
    int len = s.size();
    for(int i = 0;i < len;i++){
        ret += (s[len-1-i] - 'a' + 1) * p[i];
    }
    return ret;
}

int main(){
    int n;
    cin >> n;
    vector<int> cnt(30*30*30*30);
    for(int i = 0;i < n;i++){
        string s;
        cin >> s;
        int idx = hash30(s);
        cnt[idx]++;
    }

    int q;
    cin >> q;
    while(q > 0){
        q--;
        string s;
        cin >> s;
        
        int idx = hash30(s);
        cout << cnt[idx] << "\n";
    }
}