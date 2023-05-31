#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    vector<vector<int>> chl(n);
    for(int i = 1;i < n;i++){
        cin >> p[i];
        chl[p[i]].push_back(i);
    }
    
    int ans = 0;
    for(int i = 0;i < n;i++){
        if(chl[i].size() == 0){
            ans++;
        }
    }
    cout << ans << "\n";
}