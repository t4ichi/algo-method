#include <bits/stdc++.h>
using namespace std;

const int dx[] = {0,1,0,-1};
const int dy[] = {1,0,-1,0};

void rec(int v,vector<vector<int>> &g,vector<bool> &check){
    check[v] = true;
    for(int i = 0;i < (int)g[v].size();i++){
        if(check[g[v][i]])continue;
        rec(g[v][i],g,check);
    }
}

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> s(h);

    vector<vector<bool>> isb(h,vector<bool>(w));
    for(int i = 0;i < h;i++){
        cin >> s[i];
        for(int j = 0;j < w;j++){
            if(s[i][j] == '#'){
                isb[i][j] = true;
            }
        }
    }

    vector<vector<int>> g(h * w);
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            if(!isb[i][j]) continue;
            int v = i * w + j;
            for(int d = 0;d < 4;d++){
                int nx = j + dx[d];
                int ny = i + dy[d];
                if(nx < 0 || ny < 0 || nx >= w || ny >= h) continue;
                if(isb[ny][nx]){
                    int to = ny * w + nx; 
                    g[v].push_back(to);
                }
            }
        }
    }
    for(int i = 0;i < h*w;i++){
        sort(g[i].begin(),g[i].end());
    }

    int ans = 0;
    vector<bool> check(h*w);
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            int v = i * w + j;
            if(check[v] || !isb[i][j])continue;
            rec(v,g,check);
            ans++;
        }
    }
    cout << ans << "\n";
}