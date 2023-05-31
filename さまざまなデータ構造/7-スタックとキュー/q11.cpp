#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,l;
    cin >> n >> l;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    
    vector<int> num(n);
    ll sum = 0;
    queue<int> que;
    for(int i = 0;i < n;i++){
        num[i] = max(a[i]-sum,(ll)0);
        que.push(num[i]);
        sum += num[i];
        if(que.size() >= l){
            sum -= que.front();
            que.pop();
        }
    }

    ll ans = 0;
    for(int i : num){
        ans += i;
    }
    cout << ans << "\n";
}