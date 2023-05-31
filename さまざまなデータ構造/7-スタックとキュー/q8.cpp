#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];

    stack<pair<int,int>> stc;
    stc.push({0,0});

    for(int i = 1;i < n;i++){
        int scr = a[i];

        while(scr <= stc.top().first){
            stc.pop();
        }

        int ans = i - stc.top().second;
        cout << ans << "\n";
        stc.push({scr,i});
    }
}