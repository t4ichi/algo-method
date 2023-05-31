#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Node {
    Node* nex;
    string value;
    Node(const string& value = "") : nex(NULL), value(value) { }
};

struct HashMapNodes {
    Node* nil;

    void init() {
        nil = new Node();
        nil->nex = nil;
    }

    void insert(Node* v) {
        v->nex = nil->nex;
        nil->nex = v;
    }

    void erase(string &S) {
        Node *cur = nil, *ncur = cur->nex;
        while(ncur != nil) {
            if(ncur->value == S) {
                cur->nex = ncur->nex;
                delete ncur;
                return;
            }
            else {
                cur = ncur;
                ncur = cur->nex;
            }
        }
    }

    bool search(string &S) {
        Node *cur = nil, *ncur = cur->nex;
        while(ncur != nil) {
            if(ncur->value == S) {
                return true;
            }
            else {
                cur = ncur;
                ncur = cur->nex;
            }
        }
        return false;
    }
};

const int b = 30;
const int m = 1000003;
ll p[10];
void init(){
    p[0] = 1;
    for(int i = 1;i < 10;i++){
        p[i] = b * p[i-1] % m;
    }
}

int hash30(string s){
    ll ret = 0;
    int len = s.size();
    for(int i = 0;i < len;i++){
        ret += (s[len-1-i] - 'a' + 1) * p[i];
        ret %= m;
    }
    return ret;
}

int main(){
    init();
    vector<HashMapNodes> hash_table(m);
    for(int i = 0;i < m;i++){
        hash_table[i].init();
    }
    int q;
    cin >> q;
    while(q > 0){
        q--;
        int type;
        string t;
        cin >> type >> t;
        int idx = hash30(t);

        if(type == 0){
            Node *v = new Node(t);
            hash_table[idx].insert(v);
        }
        else if(type == 1){
            hash_table[idx].erase(t);
        }
        else{
            if(hash_table[idx].search(t)){
                cout << "Yes" << "\n";
            }
            else{
                cout << "No" << "\n";
            }
        }
    }
}