#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    
    int q;
    cin >> q;
    while(q > 0){
        q--;
        int type;
        cin >> type;
        if(type == 0){
            int k,v;
            cin >> k >> v;
            a.insert(a.begin() + k,v);
        }
        else if(type == 1){
            int k;
            cin >> k;
            a.erase(a.begin() + k);
        }
        else{
            int v;
            cin >> v;
            int ans = count(a.begin(),a.end(),v);
            cout << ans << "\n";
        }
    }
}