#include <bits/stdc++.h>
using namespace std;

double calc(int i,int j,vector<int> &x,vector<int> &y){
    int dx = x[j] - x[i];
    int dy = y[j] - y[i];
    double dis = sqrt(dx*dx + dy*dy);
    return dis;
}

int main(){
    int n;
    cin >> n;
    vector<int> x(n),y(n);
    for(int i = 0;i < n;i++){
        cin >> x[i] >> y[i];
    }
    int cur = 0;
    vector<bool> used(n);
    used[0] = true;

    double ans = 0;
    for(int i = 0;i < n-1;i++){
        double dmin = 1001001;
        int idx = 0;
        for(int j = 0;j < n;j++){
            if(used[j]) continue;
            double dis = calc(cur,j,x,y);
            if(dis < dmin){
                idx = j;
                dmin = dis;
            }
        }
        ans += dmin;
        used[idx] = true;
        cur = idx;
    }

    ans += calc(cur,0,x,y);
    printf("%.10f\n",ans);
}