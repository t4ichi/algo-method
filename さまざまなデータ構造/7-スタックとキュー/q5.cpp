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
            int num = stc.top();
            stc.pop();
            if(num == 0){
                cout << i << "\n";
            }
        }
    }
}