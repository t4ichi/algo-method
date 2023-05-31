#include <bits/stdc++.h>
using namespace std;

vector<int> ans;
int n,l,r;

void func(int i,int j){
    if(i == n){
        for(int a : ans){
            cout << a << " ";
        }
        cout << "\n";
        return;
    }
    for(int k = j;k <= r;k++){
        ans.push_back(k);
        func(i + 1,k);
        ans.pop_back();
    }
}

int main(){ 
    cin >> n >> l >> r;
    func(0,l);
}