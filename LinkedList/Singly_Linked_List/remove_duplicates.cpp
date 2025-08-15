#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};


Node* removeDuplicates(Node* head) {
    Node* curr1 = head; 

    // Traverse each node in the list
    while (curr1 != nullptr) {
        Node* curr2 = curr1; 


        while (curr2->next != nullptr) {
            
            if (curr2->next->data == curr1->data) {
                
                Node* duplicate = curr2->next;  
                curr2->next = curr2->next->next;  

                delete duplicate;
            } else {
              

                curr2 = curr2->next;
            }
        }
        
        // Move to the next node in the list
        curr1 = curr1->next;
    }
    return head;
}

void printList(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    
    // Create a singly linked list:
    // 12 -> 11 -> 12 -> 21 -> 41 -> 43 -> 21
    Node* head = new Node(12);
    head->next = new Node(11);
    head->next->next = new Node(12);
    head->next->next->next = new Node(21);
    head->next->next->next->next = new Node(41);
    head->next->next->next->next->next = new Node(43);
    head->next->next->next->next->next->next = new Node(21);

    head = removeDuplicates(head);
    printList(head);

    return 0;
}
