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

Node* min_node(Node *node_v) {
    if(node_v->left) {
        return min_node(node_v->left);
    }
    else {
        return node_v;
    }
}

bool delete_key(int v) {
    Node *now = root;
    while(now) {
        if(now->value == v) {break;}

        if(v <= now->value) {
            now = now->left;
        }
        else {
            now = now->right;
        }
    }
    if(now == nullptr) {return false;}

    if(now->left && now->right) {
        int nex_key = min_node(now->right)->value;
        delete_key(nex_key);
        now->value = nex_key;
    }
    else {
        Node *par = now->parent;
        Node *ch = nullptr;
        if(now->left) {ch = now->left;}
        if(now->right) {ch = now->right;}

        if(ch) {ch->parent = par;}
        if(par->left == now) {
            par->left = ch;
        }
        if(par->right == now) {
            par->right = ch;
        }
        delete now;
    }
    return true;
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
        else if(type == 1){
            if(find(v)){
                cout << "Yes" << "\n";
            }
            else{
                cout << "No" << "\n";
            }
        }
        else{
            if(delete_key(v)){
                cout << "Complete" << "\n";
            }
            else{
                cout << "Error" << "\n";
            }
        }   
    }
}