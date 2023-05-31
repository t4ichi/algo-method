#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    for(int i = 0;i < h;i++) cin >> s[i];

    vector<int> y(h,0),x(w,0);
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            if(s[i][j] == '#'){
                y[i]++;
            }
        }
    }

    for(int i = 0;i < w;i++){
        for(int j = 0;j < h;j++){
            if(s[j][i] == '#'){
                x[i]++;
            }
        }
    }

    int q;
    cin >> q;
    while(q > 0){
        q--;
        int p,q;
        cin >> p >> q;
        int ans = y[p] + x[q];
        if(s[p][q] == '#'){
            ans--;
        }
        cout << ans << "\n";
    }
}