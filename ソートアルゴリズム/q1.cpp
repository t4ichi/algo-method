#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];

    for(int i = 0;i < n;i++){
        bool flg = false;
        for(int j = 0;j < n-1;j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
                flg = true;
            }
        }
        if(flg){
            for(int k = 0;k < n;k++){
                cout << a[k] << " ";
            }
            cout << "\n";
        }
        else{
            break;
        }
    }
}