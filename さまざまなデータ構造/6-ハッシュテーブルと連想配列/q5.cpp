#include <bits/stdc++.h>
using namespace std;

int main(){
    set<string> st;
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        string s;
        cin >> s;
        st.emplace(s);
    }
    cout << st.size() << "\n";
}