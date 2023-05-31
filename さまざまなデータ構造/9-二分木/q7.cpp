#include <bits/stdc++.h>
using namespace std;

int main(){
    int h;
    cin >> h;
    int mn = 1;
    for(int i = 0;i < h;i++){
        mn *= 2;
    }
    int mx = 2 * mn - 1;
    cout << mn << " " << mx << "\n";
}