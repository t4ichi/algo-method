#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<int> stc;
    for(int i = 0;i < n;i++){
        if(s[i] == '('){
            stc.push(i);
        }
        else{
            if(stc.size() == 0){
                cout << "No" << "\n";
                return 0;
            }
            stc.pop();
        }
    }
    if(stc.size() > 0){
        cout << "No" << "\n";
    }
    else{
        cout << "Yes" << "\n";
    }
}