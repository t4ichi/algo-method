#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    vector<string> s(n);
    for(int i = 0;i < n;i++) cin >> s[i];

    if(s[a][b] == 'o'){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
    }
}