#include <iostream>
using namespace std;

// Define the ListNode structure
struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to reverse a linked list
ListNode *reverseList(ListNode *head)
{
    ListNode *prev = nullptr;
    ListNode *current = head;

    while (current != nullptr)
    {
        ListNode *nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    return prev;
}

// Function to print a linked list
void printList(ListNode *head)
{
    ListNode *current = head;
    while (current != nullptr)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    // Create a linked list: 1 -> 2 -> 3 -> nullptr
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);

    cout << "Original List: ";
    printList(head);

    // Reverse the list
    ListNode *reversedHead = reverseList(head);

    cout << "Reversed List: ";
    printList(reversedHead);

    // Free memory (optional in competitive programming but good practice)
    while (reversedHead != nullptr)
    {
        ListNode *temp = reversedHead;
        reversedHead = reversedHead->next;
        delete temp;
    }

    return 0;
}
