#include <bits/stdc++.h>
using namespace std;

void rec(vector<int> &a){
    if(a.size() == 0) return;
    int x = a.size() / 2;
    vector<int> l,r;
    for(int i = 0;i < a.size();i++){
        if(i == x) continue;
        if(a[i] < a[x]){
            l.push_back(a[i]);
        }
        else{
            r.push_back(a[i]);
        }
    }
    rec(l);
    rec(r);

    l.push_back(a[x]);
    l.insert(l.end(),r.begin(),r.end());
    a = l;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    
    rec(a);
    for(int i = 0;i < n;i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}