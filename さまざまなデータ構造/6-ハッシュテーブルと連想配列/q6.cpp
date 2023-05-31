#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> st;
    for(int i = 0;i < n;i++){
        int num;
        cin >> num;
        st.insert(num);
    }
    cout << n - st.size() << "\n";
}