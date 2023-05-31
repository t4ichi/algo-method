#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<string> func(int i,int l){
    if(l > 9) return {};
    
    if(i == 9){
        return {""};
    }

    vector<string> ans;
    for(auto s : func(i+1,l)){
        ans.push_back(to_string(l) + s);
    }
    for(auto s : func(i,l+1)){
        ans.push_back(s);
    }
    return ans;
}
int main(){
    int l,r;
    cin >> l >> r;

    ll ans = 0;
    for(auto s : func(0,0)){
        ll val = stoll(s);
        if(val >= l && val <= r){
            ans += val;
        }
    }
    cout << ans << "\n";
}