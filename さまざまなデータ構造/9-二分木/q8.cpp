#include <bits/stdc++.h>
using namespace std;

int main(){
    int h;
    cin >> h;

    int n = 1;
    for(int i = 0;i <= h;i++){
        n *= 2;
    }
    n--;

    int q;
    cin >> q;
    while(q > 0){
        q--;
        int type,v;
        cin >> type >> v;
        int ans = -1;
        if(type == 0){
            if(v != 0){
                ans = (v - 1) / 2;
            }
        }
        else if(type == 1){
            ans = 2 * v + 1;
            if(ans >= n){
                ans = -1;
            }
        }
        else{
            ans = 2 * v + 2;
            if(ans >= n){
                ans = -1;
            }
        }
        cout << ans << "\n";
    }
}