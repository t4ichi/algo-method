#include <bits/stdc++.h>
using namespace std;

struct Node {
    Node* nex;
    Node* pre;
    string value;
    Node(const string& value = "") : nex(NULL), value(value) { }
};

Node* nil;

void init() {
    nil = new Node();
    nil->nex = nil;
    nil->pre = nil;
}

void PushHead(Node* v) {
    v->nex = nil->nex;
    v->pre = nil;
    nil->nex = v;
    (v->nex)->pre = v;
    return;
}

void popTail() {
    Node *tail = nil->pre;
    nil->pre = tail->pre;
    (nil->pre)->nex = nil;
    delete tail;
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
            Node* v = new Node(s);
            PushHead(v);
        }
        else{
            Node* v = nil->pre;
            if(v != nil){
                cout << v -> value << "\n";
                popTail();
            }
            else{
                cout << "Error" << "\n";
            }
        }
    }
}