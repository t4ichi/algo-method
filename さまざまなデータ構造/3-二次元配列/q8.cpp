#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    for(int i = 0;i < h;i++) cin >> s[i];

    int black_sum = 0;
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            if(s[i][j] == '#'){
                black_sum++;
            }
        }
    }

    const int dx[] = {0,0,1,0,-1};
    const int dy[] = {0,1,0,-1,0};

    int q;
    cin >> q;
    while(q > 0){
        q--;
        int type;
        cin >> type;
        if(type == 0){
            int p,q;
            cin >> p >> q;
            for(int i = 0;i < 5;i++){
                int ny = p + dy[i];
                int nx = q + dx[i];
                if(nx < 0 || nx >= w || ny < 0 || ny >= h) continue;
                if(s[ny][nx] == '#'){
                    s[ny][nx] = '.';
                    black_sum--;
                }
                else{
                    s[ny][nx] = '#';
                    black_sum++;
                }
            }
        }
        else{
            cout << black_sum << "\n";
        }
    }
}