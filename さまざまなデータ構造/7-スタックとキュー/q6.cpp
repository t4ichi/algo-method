#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
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
            a[num] = i;
            a[i] = num;
        }
    }
    int q;
    cin >> q;
    while(q > 0){
        q--;
        int k;
        cin >> k;
        cout << a[k] << "\n";
    }
}