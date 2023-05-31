#include <bits/stdc++.h>
using namespace std;

bool isP(int n){
    if(n < 2) return false;
    for(int i = 2;i*i <= n;i++){
        if(n%i == 0)return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;

    for(int i = 0;i*2 <= n;i++){
        int ma = n - i;
        int mi = n - ma;
        if(isP(ma) && isP(mi)){
            cout << mi << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
}