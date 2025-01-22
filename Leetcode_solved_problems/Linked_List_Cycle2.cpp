#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {

        ListNode *pointer1 = head;
        ListNode *pointer2 = head;

        while (pointer2 && pointer2->next)
        {
            pointer1 = pointer1->next;
            pointer2 = pointer2->next->next;

            if (pointer1 == pointer2)
            {
                return true;
            }
        }

        return false;
    }
};

int main()
{
    ListNode *head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next;

    Solution solution;
    bool result = solution.hasCycle(head);

    cout << result << endl;
}
