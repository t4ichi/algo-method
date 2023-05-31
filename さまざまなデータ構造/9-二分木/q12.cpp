#include <bits/stdc++.h>
using namespace std;
using tpl = tuple<int,int,string>;

int main(){
    int q;
    cin >> q;

    priority_queue<tpl,vector<tpl>,greater<tpl>> pq;

    for(int i = 0;i < q;i++){
        int type;
        cin >> type;
        if(type == 0){
            int t;
            string s;
            cin >> t >> s;
            pq.emplace(t,i,s);
        }
        else{
            auto [t,idx,s] = pq.top();
            pq.pop();
            cout << s << "\n";
        }
    }
}