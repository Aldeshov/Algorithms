#include <iostream>

using namespace std;

template <typename T>
class Node {
    public:
    T data;
    Node *next;

    Node(T data) {
        this->data = data;
        next = NULL;
    }
};

template<typename T>
class Stack {
    public:
    Node<T> *top;
    int sz;

    Stack() {
        top = NULL;
        sz = 0;
    }

    void push(int data) {
        Node<T> *node = new Node<T>(data);
        node->next = this->top;
        top = node;
        sz++;
    }

    bool empty() {
        return (sz == 0);
    }

    void pop() {
        if (!empty()) {
            top = top->next;
            sz--;
        }
    }

    int back() {
        return top->data;
    }
};

int main() {
    
    return 0;
}