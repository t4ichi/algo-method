#include <bits/stdc++.h>
using namespace std;

mt19937 mt;
random_device rnd;

int random_int(int n){
    return mt() % n;
}

void rec(vector<int> &a){
    if(a.size() == 0) return;
    
    vector<int> l,r;
    int x = random_int(a.size());
    for(int i = 0;i < a.size();i++){
        if(i == x) continue;
        if(a[i] == a[x]){
            if(random_int(2)){
                l.push_back(a[i]);
            }
            else{
                r.push_back(a[i]);
            }
        }
        else if(a[i] < a[x]){
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

    mt.seed(rnd());
    rec(a);
    for(int i = 0;i < n;i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}