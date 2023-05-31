#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> s(n),t(n);
    for(int i = 0;i < n;i++){
        cin >> s[i] >> t[i];
    }

    vector<bool> used(n);
    int cur = 0;
    int ans = 0;
    for(int i = 0;i < n;i++){
        int idx = -1;
        int min = 1001001;
        for(int j = 0;j < n;j++){
            if(used[j]) continue;
            if(t[j] < min && s[j] >= cur){
                idx = j;
                min = t[j];
            }
        }
        if(idx == -1) break;;
        ans++;
        cur = t[idx];
        used[idx] = true;
    }
    cout << ans << "\n";
}