#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n-1),b(n-2);
    for(int i = 0;i < n-1;i++)cin >> a[i];
    for(int i = 0;i < n-2;i++)cin >> b[i];

    vector<int> d(n);
    d[1] = a[0];
    for(int i = 2;i < n;i++){
        d[i] = min(d[i-1] + a[i-1],b[i-2]+d[i-2]);
    }
    cout << d[n-1] << "\n";
}