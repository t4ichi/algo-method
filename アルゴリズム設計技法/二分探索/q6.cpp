#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> w(n);
    for(int i = 0;i < n;i++) cin >> w[i];

    vector<int> a = w;
    sort(a.begin(),a.end());
    for(int i = 0;i < n;i++){
        int l = -1;
        int r = n;
        while(abs(r - l) > 1){
            int mid = (l + r) / 2;
            if(a[mid] <= w[i]){
                l = mid;
            }
            else{
                r = mid;
            }
        }
        cout << l << "\n";
    }
}