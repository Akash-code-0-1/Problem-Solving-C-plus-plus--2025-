#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val) : data(val), next(nullptr) {}
};

void traverseLinkedList(Node *head)
{
    Node *current = head;

    while (current != nullptr)
    {
        cout << current->data << " ";

        current = current->next;
    }

    cout << endl;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    cout << "Linked list contents: ";
    traverseLinkedList(head);

    Node *current = head;
    while (current != nullptr)
    {
        Node *temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
