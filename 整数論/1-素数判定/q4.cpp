#include <bits/stdc++.h>
using namespace std;

bool isP(int n){
    if(n < 2) return false;
    for(int i = 2;i*i <= n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    for(int i = n;i > 1;i--){
        if(isP(i)){
            cout << i << "\n";
            return 0;
        }
    }
}