#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    vector<vector<bool>> isfollower(n,vector<bool>(n));
    map<vector<bool>,int> cnt;

    for(int i = 0;i < n;i++){
        cnt[isfollower[i]]++;
    }

    while(q > 0){
        q--;
        int type;
        cin >> type;
        if(type == 0){
            int x,y;
            cin >> x >> y;
            if(isfollower[y][x] == 0){
                cnt[isfollower[y]]--;
                isfollower[y][x] = true;
                cnt[isfollower[y]]++;
            }
        }
        else if(type == 1){
            int x,y;
            cin >> x >> y;
            if(isfollower[y][x] == 1){
                cnt[isfollower[y]]--;
                isfollower[y][x] = 0;
                cnt[isfollower[y]]++;
            }
        }
        else{
            int z;
            cin >> z;
            cout << cnt[isfollower[z]] -1 << "\n";
        }
    }
}