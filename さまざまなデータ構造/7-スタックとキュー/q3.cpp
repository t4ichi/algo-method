#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;

    vector<int> a(n,-1);
    int head = 0;
    int tail = 0;
    while(q > 0){
        q--;
        int type;
        cin >> type;
        if(type == 0){
            int v;
            cin >> v;
            a[tail] = v;
            tail++;
            if(tail == n){
                tail = 0;
            }
        }
        else{
            a[head] = -1;
            head++;
            if(head == n){
                head = 0;
            }
        }
    }
    for(int i = 0;i < n;i++){
        cout << a[i] << "\n";
    }
}