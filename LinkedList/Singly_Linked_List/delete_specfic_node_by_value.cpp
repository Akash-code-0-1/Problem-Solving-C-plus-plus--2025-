#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

// Fix: Pass `head` by reference
void deleteNode(Node *&head, int key)
{
    // Case 1: First node contains the key
    while (head != nullptr && head->data == key)
    {
        Node *temp = head;
        head = head->next; // Move head forward
        delete temp;
    }

    // If the list is empty after deleting the head nodes
    if (head == nullptr)
        return;

    Node *curr = head;
    while (curr->next != nullptr)
    {
        if (curr->next->data == key)
        {
            Node *delnode = curr->next;
            curr->next = curr->next->next;
            delete delnode;
        }
        else
        {
            curr = curr->next;
        }
    }
}

void printList(Node *head)
{
    Node *curr = head;
    while (curr != nullptr)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    // Creating a linked list: 4 -> 5 -> 6 -> 7 -> 8
    Node *head = new Node(4);
    head->next = new Node(5);
    head->next->next = new Node(6);
    head->next->next->next = new Node(7);
    head->next->next->next->next = new Node(8);

    cout << "Original list: ";
    printList(head);

    deleteNode(head, 4); // Fix: Now deletes 4 properly

    cout << "After deleting 4: ";
    printList(head);

    return 0;
}
