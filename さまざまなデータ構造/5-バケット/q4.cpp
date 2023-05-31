#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> cnt(26);
    for(int i = 0;i < n;i++){
        string w;
        cin >> w;
        for(auto c : w){
            cnt[c-'a']++; 
        }
    }
    for(int i : cnt){
        if(i == 0){
            cout << "No" << "\n";
            return 0;
        }
    }
    cout << "Yes" << "\n";
}