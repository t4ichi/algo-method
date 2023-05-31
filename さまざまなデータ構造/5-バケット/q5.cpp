#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;

    vector<vector<bool>> isFollow(n+1,vector<bool>(n+1));
    vector<int> cnt(n+1);

    while(q > 0){
        q--;
        int type;
        cin >> type;
        if(type == 0){
            int x,y;
            cin >> x >> y;
            if(!isFollow[x][y]){
                cnt[y]++;
                isFollow[x][y] = true;
            }
        }
        else if(type == 1){
            int x,y;
            cin >> x >> y;
            if(isFollow[x][y]){
                cnt[y]--;
                isFollow[x][y] = false;
            }
        }
        else{
            int z;
            cin >> z;
            cout << cnt[z] << "\n";
        }
    }
}