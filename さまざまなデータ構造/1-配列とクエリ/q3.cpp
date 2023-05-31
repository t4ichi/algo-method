#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {3,1,4,1,5,9,2,6,5,3};
    int q;
    cin >> q;
    for(int i = 0;i < q;i++){
        int type;
        cin >> type;
        if(type == 0){
            int k;
            cin >> k;
            cout << a[k] << "\n";
        }
        else{
            int k,v;
            cin >> k >> v;
            a[k] = v;
        }
    }
}