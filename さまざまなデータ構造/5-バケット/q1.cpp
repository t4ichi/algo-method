#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> cnt(100001);
    for(int i = 0;i < n;i++){
        int a;
        cin >> a;
        cnt[a]++;
    }
    int q;
    cin >> q;
    while(q > 0){
        q--;
        int x;
        cin >> x;
        cout << cnt[x] << "\n";
    }
}