#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> cnt(1e5+1);
    for(int i = 0;i < n;i++){
        cin >> a[i];
        cnt[a[i]]++;
    }


    int q;
    cin >> q;
    while(q > 0){
        q--;
        int type;
        cin >> type;
        if(type == 0){
            int v;
            cin >> v;
            cnt[v]++;
        }
        else if(type == 1){
            int v;
            cin >> v;
            cnt[v] = 0;
        }
        else{
            int v;
            cin >> v;
            cout << cnt[v] << "\n";
        }
    }
}