#include <bits/stdc++.h>
using namespace std;

void rec(int v,vector<int> &l,vector<int> &r){
    if(l[v] != -1){
        rec(l[v],l,r);
    }
    cout << v << " ";

    if(r[v] != -1){
        rec(r[v],l,r);
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> l(n),r(n);
    for(int i = 0;i < n;i++){
        cin >> l[i] >> r[i];
    }
    rec(0,l,r);
    cout << "\n";
}