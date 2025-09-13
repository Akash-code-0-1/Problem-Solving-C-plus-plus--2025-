#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

void sortList(Node *head)
{
    int cnt[3] = {0, 0, 0};
    Node *ptr = head;

    while (ptr != nullptr)
    {
        cnt[ptr->data]++;
        ptr = ptr->next;
    }

    ptr = head;
    int idx = 0;

    while (ptr != nullptr)
    {
        if (cnt[idx] == 0)
        {
            idx++;
        }
        else
        {
            ptr->data = idx;
            cnt[idx]--;
            ptr = ptr->next;
        }
    }
}

void insert(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void printList(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head = nullptr;

    insert(head, 1);
    insert(head, 2);
    insert(head, 2);
    insert(head, 1);
    insert(head, 0);
    insert(head, 0);
    insert(head, 1);

    cout << "Original List: ";
    printList(head);

    sortList(head);

    cout << "Sorted List: ";
    printList(head);

    return 0;
}
