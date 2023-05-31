#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    int q;
    cin >> q;
    while(q > 0){
        q--;
        int type;
        cin >> type;
        if(type == 0){
            int k;
            cin >> k;
            if(k < 0 || k >= a.size()){
                cout << "Error" << "\n";
            }
            else{
                cout << a[k] << "\n";
            }
        }
        else{
            int v;
            cin >> v;
            a.push_back(v);
        }
    }
}