#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    for(int i = 0;i < h;i++) cin >> s[i];

    int q;
    cin >> q;

    const int dx[] = {0,0,1,0,-1};
    const int dy[] = {0,1,0,-1,0};
    while(q > 0){
        q--;
        int type;
        cin >> type;
        if(type == 0){
            int y,x;
            cin >> y >> x;
            for(int i = 0;i < 5;i++){
                int nx = x + dx[i];
                int ny = y + dy[i];
                
                if(nx < 0 || nx >= w || ny < 0 || ny >= h) continue;
                if(s[ny][nx] == '.'){
                    s[ny][nx] = '#';
                }
                else{
                    s[ny][nx] = '.';
                }
            }
        }
        else{
            int y,x;
            cin >> y >> x;
            int ans = 0;
            for(int i = 0;i < 5;i++){
                int nx = x + dx[i];
                int ny = y + dy[i];
                
                if(nx < 0 || nx >= w || ny < 0 || ny >= h) continue;
                if(s[ny][nx] == '#'){
                    ans++;
                }
            }
            cout << ans << "\n";
        }
    }

}