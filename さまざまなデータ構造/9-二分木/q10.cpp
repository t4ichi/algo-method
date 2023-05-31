#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    vector<int> heap;
    for(int i = 0;i < q;i++){
        int v;
        cin >> v;
        heap.push_back(v);
        int idx = i;
        while(true){
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

    for(int i : heap){
        cout << i << " ";
    }
    cout << "\n";
}