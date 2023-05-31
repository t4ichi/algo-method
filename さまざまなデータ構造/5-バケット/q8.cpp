#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    vector<int> p(q);
    for(int i = 0;i < q;i++){
        cin >> p[i];
    }

    vector<int> cnt(2e4+1);
    for(int i = -100;i <= 100;i++){
        for(int j = -100;j <= 100;j++){
            int k = i * i + j * j;
            cnt[k]++;
        }
    }

    for(int i = 0;i < q;i++){
        cout << cnt[p[i]] << "\n";
    }
}