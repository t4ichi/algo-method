#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    for(int i = 0;i < m;i++){
        int b;
        cin >> b;
        int l = 0;
        int r = n-1;
        while(r != l){
            int mid = (r+l)/2;
            if(a[mid] < b){
                l = mid+1;
            }
            else{
                r = mid;
            }
        }
        cout << l << "\n";
    }
}