#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 1;i < n;i++) cin >> a[i];

    int ans = 0;
    while(x != 0){
        x = a[x];
        ans++;
    }
    cout << ans << "\n";
}