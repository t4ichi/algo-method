#include <bits/stdc++.h>
using namespace std;

struct Node {
    Node* nex;
    string value;
    Node(const string& value = "") : nex(NULL), value(value) { }
};

Node* nil;

void init() {
    nil = new Node();
    nil->nex = nil;
}

void insert(Node* v) {
    v->nex = nil->nex;
    nil->nex = v;
}

int main(){
    init();

    int q;
    cin >> q;
    while(q > 0){
        q--;
        int type;
        cin >> type;
        if(type == 0){
            string s;
            cin >> s;
            Node *v = new Node(s);
            insert(v);
        }
        else{
            int k;
            cin >> k;
            Node *v = nil;
            for(int i = 0;i < k;i++){
                v = v->nex;
                if(v == nil) break;
                cout << v->value << " ";
            }
            cout << "\n";
        }
    }
}