#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 1;i < n;i++){
        int v = (i - 1) / 2;
        if(a[v] < a[i]){
            cout << "No" << "\n";
            return 0;
        }
    }
    cout << "Yes" << "\n";
}