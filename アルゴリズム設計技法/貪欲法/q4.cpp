#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(m);
    for(int i = 0;i < n;i++) cin >> a[i];
    for(int i = 0;i < m;i++) cin >> b[i];
    vector<bool> used(n);

    int ans = 0;
    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            if(used[j]) continue;
            if(a[j] <= b[i]){
                used[j] = true;
                ans++;
                break;
            }
        }
    }
    cout << ans << "\n";
}