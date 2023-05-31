#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> s(h),t(h);
    for(int i = 0;i < h;i++) cin >> s[i];
    for(int i = 0;i < h;i++) cin >> t[i];

    int ans = 0;
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            if(s[i][j] != t[i][j]){
                ans++;
            }
        }
    }
    cout << ans << "\n";
}