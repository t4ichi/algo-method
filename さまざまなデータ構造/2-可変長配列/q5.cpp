#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        a[i] = i + 1;
    }

    while(a.size() > 1){
        a.erase(a.begin());
        a.push_back(a.front());
        a.erase(a.begin());
    }
    cout << a.front() << "\n";
}