#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> heap;
    int q;
    cin >> q;
    for(int i = 0;i < q;i++){
        int type;
        cin >> type;
        if(type == 0){
            int v;
            cin >> v;
            heap.push_back(v);
            int idx = heap.size() - 1;
            while(idx > 0){
                int p = (idx - 1) / 2;
                if(heap[p] < heap[idx]){
                    swap(heap[p],heap[idx]);
                    idx = p;
                }
                else{
                    break;
                }
            }
        }
        else{
            cout << heap[0] << "\n";
            heap[0] = heap.back();
            heap.pop_back();
            int siz = heap.size();
            int now = 0;
            while(now < siz){
                int l = 2 * now + 1;
                int r = 2 * now + 2;
                int flg = 0;
                int mx = heap[now];
                if(l < siz && heap[l] > mx){
                    mx = heap[l];
                    flg = 1;
                }
                if(r < siz && heap[r] > mx){
                    mx = heap[r];
                    flg = 2;
                }

                if(flg == 0){
                    break;
                }
                else if(flg == 1){
                    swap(heap[now],heap[l]);
                    now = l;
                }
                else{
                    swap(heap[now],heap[r]);
                    now = r;
                }
            }
        }
    }
}