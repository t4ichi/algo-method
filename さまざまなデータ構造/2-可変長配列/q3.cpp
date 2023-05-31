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
            int v;
            cin >> v;
            a.push_back(v);
        }
        else{
            if(!a.empty()){
                cout << a.back() << "\n";
                a.pop_back();
            }
            else{
                cout << "Error" << "\n";
            }
        }
    }
}