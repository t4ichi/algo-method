#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string t;
    cin >> n >> t;

    int ans = 0;
    while(n > 0){
        n--;
        int m;
        cin >> m;
        while(m > 0){
            m--;
            string s;
            cin >> s;
            if(s == t){
                ans++;
            }
        }
    }
    cout << ans << "\n";
}