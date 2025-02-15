#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

Node* sortList(Node* head) {
    if (!head || !(head->next))
        return head;

    Node *zeroD = new Node(0);
    Node *oneD = new Node(0);
    Node *twoD = new Node(0);

    Node *zero = zeroD, *one = oneD, *two = twoD;
    Node *curr = head;

    while (curr != NULL) {
        if (curr->data == 0) {
            zero->next = curr;
            zero = zero->next;
        }
        else if (curr->data == 1) {
            one->next = curr;
            one = one->next;
        }
        else {
            two->next = curr;
            two = two->next;
        }
        curr = curr->next;
    }

    if (oneD->next) 
        zero->next = oneD->next;
    else
        zero->next = twoD->next;
  
    one->next = twoD->next;
    two->next = nullptr;

    head = zeroD->next;
    delete zeroD;
    delete oneD;
    delete twoD;
    return head;
}

void insert(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    insert(head, 1);
    insert(head, 2);
    insert(head, 2);
    insert(head, 1);
    insert(head, 0);
    insert(head, 0);
    insert(head, 1);

    cout << "Original List: ";
    printList(head);

    head = sortList(head);

    cout << "Sorted List: ";
    printList(head);

    return 0;
}
