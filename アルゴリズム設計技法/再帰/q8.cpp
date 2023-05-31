#include <bits/stdc++.h>
using namespace std;

vector<int> ans;
int n,l,r;
void func(int i,int j,int &cnt){
    if(i == n){
        if((int)ans.size() == n){
            cnt++;
        }
        return;
    }
    for(int k = j + 1;k <= r;k++){
        ans.push_back(k);
        func(i + 1,k,cnt);
        ans.pop_back();
    }

}

int main(){
    cin >> n >> l >> r;
    int cnt = 0;
    func(0,l-1,cnt);
    cout << cnt << "\n";
}