#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n),f;
    for(int i = 0;i < n;i++) cin >> a[i];
    

    int q;
    cin >> q;
    while(q > 0){
        q--;
        int type;
        cin >> type;
        if(type == 0){
            int v;
            cin >> v;
            f.push_back(v);
        }
        else if(type == 1){
            int v;
            cin >> v;
            a.push_back(v);
        }
        else{
            int k;
            cin >> k;
            if(k < f.size() + a.size()){
                if(k < f.size()){
                    cout << f[(f.size() - 1) - k] << "\n";
                }
                else{
                    cout << a[k - f.size()] << "\n"; 
                }
            }
            else{
                cout << "Error" << "\n";
            }
        }
    }
}