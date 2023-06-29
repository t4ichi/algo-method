#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];

    for(int k = 0;k < n-1;k++){
        int mn = 1001;
        int idx = 0;
        for(int i = k;i < n;i++){
            if(a[i] < mn){
                idx = i;
                mn = a[i];
            }
        }
        swap(a[k],a[idx]);
        for(int j = 0;j < n;j++){
            cout << a[j] << " ";
        }
        cout << "\n";
    }
}