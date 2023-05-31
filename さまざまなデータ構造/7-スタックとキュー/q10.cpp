#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,q;
    cin >> x >> q;
    queue<int> que;
    
    int ans = 0;
    while(q > 0){
        q--;
        int type,t;
        cin >> type >> t;

        if(type == 0){
            que.push(x + t);
        }
        else{
            while(!que.empty() && que.front() <= t){
                ans++;
                que.pop();
            }
            cout << ans << "\n";
        }
    }
}