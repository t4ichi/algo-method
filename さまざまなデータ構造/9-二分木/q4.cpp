#include <bits/stdc++.h>
using namespace std;

struct Node {
    Node* parent;
    Node* left;
    Node* right;
    int value;
    Node(const int& value = 0) : value(value) {
        parent = nullptr;
        left = nullptr;
        right = nullptr;
    }
};
Node* root = new Node(-1);

void insert(Node* node_v) {
    int v = node_v->value;
    Node *par, *nex = root;
    while(nex) {
        par = nex;
        if(v <= par->value) {
            nex = par->left;
        }
        else {
            nex = par->right;
        }
    }

    if(v <= par->value) {
        node_v->parent = par;
        par->left = node_v;
    }
    else {
        node_v->parent = par;
        par->right = node_v;
    }
    return;
}

bool find(int v) {
    Node *now = root;
    while(now) {
        if(now->value == v) {return true;}

        if(v <= now->value) {
            now = now->left;
        }
        else {
            now = now->right;
        }
    }
    return false;
}

int main(){
    int q;
    cin >> q;
    while(q > 0){
        q--;
        int type,v;
        cin >> type >> v;
        if(type == 0){
            Node* n = new Node(v);
            insert(n);
        }
        else{
            if(find(v)){
                cout << "Yes" << "\n";
            }
            else{
                cout << "No" << "\n";
            }
        }
    }
}