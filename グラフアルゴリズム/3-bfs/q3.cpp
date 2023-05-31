#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    int x0,y0,x1,y1;
    cin >> x0 >> y0 >> x1 >> y1;
    vector<string> s(h);
    for(int i = 0;i < h;i++) cin >> s[i];
    
    vector<vector<int>> dist(h,vector<int>(w,-1));
    dist[x0][y0] = 0;
    queue<pair<int,int>> que;
    que.emplace(x0,y0);    
    int dx[] = {0,1,0,-1};
    int dy[] = {1,0,-1,0};
    while(!que.empty()){
        int x  = que.front().first;
        int y  = que.front().second;
        que.pop();
        for(int i = 0;i < 4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || nx >= h || ny < 0 || ny >= w || s[nx][ny] == 'B') continue;
            if(dist[nx][ny] != -1) continue;
            dist[nx][ny] = dist[x][y] + 1;
            que.emplace(nx,ny);
        }
    }
    cout << dist[x1][y1] << "\n";
}