#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class Queue {
    public:
    Node *tail, *head;
    int sz;

    Queue() {
        tail = head = NULL;
        sz = 0;
    }

    void push(int data) {
        Node *node = new Node(data);
        tail->next = node;
        tail = node;
        sz++;
    }
    void pop() {
        if (head != NULL) {
            sz--;
            head = head->next;
        }
    }

    int front() {
        return head->data;
    }

    bool empty() {
        return sz == 0;
    }
    void print() {
        Node *node = head;
        while (node != NULL) {
            cout << node->data << "-->";
            node = node->next;
        }
        cout << endl;
    }
};

};

void func(Queue *q){
    int temp;
    while(!q->empty()){
        temp = q->front();
        q->pop();
        func(q);
        q->push(temp);
    }
}

int main() {
    Queue *q = new Queue();
    func(q);
    q->print();
    return 0;
}