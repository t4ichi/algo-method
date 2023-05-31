#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    vector<int> nex(n,-1),bak(n,-1);

    while(q > 0){
        q--;
        int type;
        cin >> type;
        if(type == 0){
            int p,q;
            cin >> p >> q;
            nex[p] = q;
            bak[q] = p;
        }
        else{
            int r;
            cin >> r;
            if(bak[r] != -1){
                nex[bak[r]] = nex[r];
            }
            if(nex[r] != -1){
                bak[nex[r]] = bak[r];
            }

            nex[r] = -1;
            bak[r] = -1;
        }
    }

    int cur = 0;
    int ans = 0;
    while(cur != -1){
        cur = nex[cur];
        ans++;
    }
    cur = 0;
    while(cur != -1){
        cur = bak[cur];
        ans++;
    }
    cout << ans - 1 << "\n";
}