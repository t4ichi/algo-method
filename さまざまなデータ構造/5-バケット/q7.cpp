#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> cnt(2e5+1);
    vector<int> a(n);
    ll sum = 0;
    for(int i = 0;i < n;i++){
         cin >> a[i];
         cnt[a[i]]++;
         sum += a[i];
    }

    int q;
    cin >> q;
    while(q > 0){
        q--;
        int type;
        cin >> type;
        if(type == 0){
            int v;
            cin >> v;
            cnt[v]++;
            sum += v;
        }
        else if(type == 1){
            int x,y;
            cin >> x >> y;
            sum += (ll)(y - x) * cnt[x];
            cnt[y] += cnt[x];
            cnt[x] = 0;
        }
        else{
            cout << sum << "\n";
        }
    }
}