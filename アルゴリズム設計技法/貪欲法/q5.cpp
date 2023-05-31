#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    while (n > 0)
    {
        if(n % 3 == 0){
            n /= 3;
        }
        else{
            n--;
        }
        ans++;
    }
    cout << ans << "\n";
}