#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];

    for(int k = 1;k < n;k++){
        int pos = k;
        while(pos != 0 && a[pos-1] > a[pos]){
            swap(a[pos-1],a[pos]);
            pos--;
        }

        for(int i = 0;i < n;i++){
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}