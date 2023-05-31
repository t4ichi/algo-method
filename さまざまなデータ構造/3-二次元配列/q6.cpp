#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;

    vector<vector<bool>> isFollow(n,vector<bool>(n));
    while(q > 0){
        q--;
        int type;
        cin >> type;
        if(type == 0){
            int x,y;
            cin >> x >> y;
            isFollow[x][y] = true;
        }
        else{
            int z;
            cin >> z;
            vector<int> followers;
            for(int i = 0;i < n;i++){
                if(isFollow[i][z]){
                    followers.push_back(i);
                }
            }
            if(!followers.empty()){
                for(int i = 0;i < (int)followers.size();i++){
                    cout << followers[i];
                    if(i != (int)followers.size() - 1){
                        cout << " ";
                    }
                }
                cout << "\n";
            }
            else{
                cout << "No" << "\n";
            }
        }
    }
}