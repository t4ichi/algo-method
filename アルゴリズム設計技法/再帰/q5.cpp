#include <bits/stdc++.h>
using namespace std;

int n,x;
bool f(int i,int sum,vector<int> a){
    if(i == n) return (sum == x);
    if(f(i+1,sum + a[i],a))return true;
    if(f(i+1,sum,a))return true;
    return false;
}

int main(){
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    if(f(0,0,a)){
        cout << "Yes" << "\n"; 
    }
    else{
        cout << "No" << "\n";
    }
}