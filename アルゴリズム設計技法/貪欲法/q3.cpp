#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    vector<int> a(4);
    for(int i = 0;i < 4;i++) cin >> a[i];
    const int price[] = {50,10,5,1};

    int ans = 0;
    for(int i = 0;i < 4;i++){
        int cnt = min(x/price[i],a[i]);
        ans += cnt;
        x -= cnt * price[i];
    }
    cout << ans << "\n";
}