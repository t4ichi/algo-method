#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,int> mp;
    for(int i = 0;i < n;i++){
        string s;
        cin >> s;
        mp[s]++;
    }
    int q;
    cin >> q;
    while(q > 0){
        q--;
        int type;
        string t;
        cin >> type >> t;
        if(type == 0){
            mp[t]++;
        }
        else if(type == 1){
            mp[t] = 0;
        }
        else{
            cout << mp[t] << "\n";
        }
    }
}