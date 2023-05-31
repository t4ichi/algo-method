#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    int q;
    cin >> q;

    vector<int> nex(n,-1),bak(n,-1);
    for(int i = 0;i < n;i++){
        if(i + 1 < n){
            bak[a[i]] = a[i+1];
        }
        if(i - 1 >= 0){
            nex[a[i]] = a[i-1];
        }
    }
    while(q > 0){
        q--;
        int type;
        cin >> type;
        if(type == 0){
            int v;
            cin >> v;
            if(nex[v] != -1){
                cout << nex[v] << "\n";
                int next_v = nex[v];
                if(nex[next_v] != -1){
                    bak[nex[next_v]] = v;
                }
                if(bak[v] != -1){
                    nex[bak[v]] = next_v;
                }
                nex[v] = nex[next_v];
                bak[next_v] = bak[v];
                bak[v] = next_v;
                nex[next_v] = v;
            }
            else{
                cout << "Error" << "\n";
            }
        }
        else{
            int v;
            cin >> v;

            if(nex[v] != -1){
                bak[nex[v]] = bak[v];
            }
            if(bak[v] != -1){
                nex[bak[v]] = nex[v];
            }

            nex[v] = -1;
            bak[v] = -1;
        }
    }
}