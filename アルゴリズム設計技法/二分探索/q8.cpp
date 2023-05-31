#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> l(n);
    for(int i = 0;i < n;i++) cin >> l[i];
    
    auto isOK = [&](double d){
        int cnt = 0;
        for(int i = 0;i < n;i++){
            cnt += (double)l[i] / d;
        }
        return (cnt >= k);
    };

    int m = *max_element(l.begin(),l.end());
    double ok = 0;
    double ng = m + 1;
    while(ng - ok > 1e-8){
        double mid = (ok + ng) / 2;
        if(isOK(mid)){
            ok = mid;
        }
        else{
            ng = mid;
        }
    }
    printf("%.8f\n",ok);
}