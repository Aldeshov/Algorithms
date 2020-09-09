#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node *left;
    Node *right;
    Node *parent;
    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class Tree {
    public:
    Node *root;

    Tree() {
        root = NULL;
    }

    Node *insert_node(Node *node, int data) {
        if (node == NULL) {
            node = new Node(data);
            return node;
        }
        if (node->data < data)
            node->right = insert_node(node->right, data);
        else 
            node->left = insert_node(node->left, data);    
        return node;
    }
};

int main() {
    return 0;
}