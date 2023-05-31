#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    queue<string> que;
    while(q > 0){
        q--;
        int type;
        cin >> type;
        if(type == 0){
            string s;
            cin >> s;
            que.push(s);
        }
        else{
            cout << que.front() << "\n";
            que.pop();
        }
    }
}