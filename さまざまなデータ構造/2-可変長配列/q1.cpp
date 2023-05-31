#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0;i < n;i++)cin >> a[i];

    cout << a[k] << "\n";
    cout << a[(a.size() - 1)- k] << "\n";
}