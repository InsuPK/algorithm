#include <iostream>

using namespace std;

struct Tree {
    int key;
    Tree* left;
    Tree* right;

    Tree(int k, Tree* l, Tree* r) {
        key = k;
        left = l;
        right = r;
    }
    ~Tree() {};
};

Tree* grow(Tree* root, int key) {
    if (root == nullptr)
        return new Tree(key, nullptr, nullptr);
    
    if (key < root->key) {
        root->left = grow(root->left, key);
    }
    else if (key > root->key) {
        root->right = grow(root->right, key);
    }

    return root;
}

void postorder(Tree* root) {
    if (root == nullptr)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->key << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    Tree* root = nullptr;

    while (cin >> n) {
        root = grow(root, n);
    }

    postorder(root);

    return 0;
}