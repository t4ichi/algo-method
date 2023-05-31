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
Node* root = new Node();

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

vector<int> ans;

void rec(Node* v){
    ans.push_back(v->value);
    if(v->left){
        rec(v->left);
    }
    if(v->right){
        rec(v->right);
    }
}

int main(){
    int q;
    cin >> q;

    for(int i = 0;i < q;i++){
        int v;
        cin >> v;
        if(i == 0){
            root->value = v;
            continue;
        }
        Node* n = new Node(v);
        insert(n);
    }
    rec(root);
    for(int i = 0;i < q;i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
}