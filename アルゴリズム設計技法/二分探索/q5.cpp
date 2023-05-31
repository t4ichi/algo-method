#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    
    sort(a.begin(),a.end());
    ll ans = 0;
    for(int i = 0;i < n;i++){
        int l = -1;
        int r = n;
        while(abs(r - l) > 1){
            int mid = (l + r) / 2;
            if(a[i] + a[mid] >= k){
                r = mid;
            }
            else{
                l = mid;
            }
        }
        ans += n - r;
    }
    cout << ans << "\n";
}