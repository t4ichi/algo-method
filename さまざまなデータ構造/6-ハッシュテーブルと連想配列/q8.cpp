#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    map<string,int> mp;
    for(int i = 0;i < n;i++){
        cin >> s[i];
        sort(s[i].begin(),s[i].end());
        mp[s[i]]++;
    }

    ll par = (ll)n * (n - 1) / 2;
    ll chl = 0;
    for(auto i : mp){
        int val = i.second;
        chl += (ll)val * (val - 1) / 2;
    }
    cout << fixed << setprecision(10) << (double)chl/par << "\n";
}