#include <bits/stdc++.h>
using namespace std;

int f(int a,int b){
    if(b < a){
        return 0;
    }
    return b + f(a,b - 1);
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << f(a,b) << "\n";
}