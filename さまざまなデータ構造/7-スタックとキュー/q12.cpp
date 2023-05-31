#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    for(int i = 0;i < h;i++) cin >> s[i];

    int sx,sy;
    int gx,gy;
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            if(s[i][j] == 'S'){
                sy = i;
                sx = j;
            }
            if(s[i][j] == 'G'){
                gy = i;
                gx = j;
            }
        }
    }

    queue<pair<int,int>> que;
    que.emplace(sy,sx);
    vector<vector<int>> d(h,vector<int>(w,-1));
    d[sy][sx] = 0;
    const int dx[] = {0,1,0,-1};
    const int dy[] = {1,0,-1,0};
    while(!que.empty()){
        int y = que.front().first;
        int x = que.front().second;
        que.pop();
        for(int i = 0;i < 4;i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny < 0 || ny >= h || nx < 0 || nx >= w) continue;
            if(d[ny][nx] != -1) continue;
            if(s[ny][nx] == '#') continue;
            que.emplace(ny,nx);
            d[ny][nx] = d[y][x] + 1;
        }
    }
    cout << d[gy][gx] << "\n";
}