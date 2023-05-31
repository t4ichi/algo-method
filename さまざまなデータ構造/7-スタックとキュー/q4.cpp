#include <bits/stdc++.h>
using namespace std;

int main(){
    string x;
    cin >> x;
    int n;
    cin >> n;
    stack<int> stc;
    for(int i = 0;i < n;i++){
        string s;
        cin >> s;
        if(s == "+" || s == "-" || s == "*"){
            int num2 = stc.top();
            stc.pop();
            
            int num1 = stc.top();
            stc.pop();
            
            int ret;
            if(s == "+"){
                ret = num1 + num2;
            }
            else if(s == "-"){
                ret = num1 - num2;
            }
            else if(s == "*"){
                ret = num1 * num2;
            }
            stc.push(ret);
        }
        else{
            stc.push(stoi(s));
        }
    }
    cout << x << "=" << stc.top() << "\n";
}