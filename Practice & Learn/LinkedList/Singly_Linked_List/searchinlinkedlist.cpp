#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val) : data(val), next(nullptr) {}
};

void traverseLinkedList(Node *head, int target)
{
    Node *current = head;

    while (current != nullptr)
    {
        if (current->data == target)
        {
            cout << "Target Found";
            break;
        }

        current = current->next;
    }
    cout << "Target Not Found";

    cout << endl;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    int target = 5;

    traverseLinkedList(head, target);

    Node *current = head;
    while (current != nullptr)
    {
        Node *temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
