#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    queue<int> modifyQueue(queue<int> q, int k)
    {
        stack<int> temp_stack;
        queue<int> reversed_queue;

        for (int i = 0; i < k; i++)
        {
            temp_stack.push(q.front());
            q.pop();
        }

        while (!temp_stack.empty())
        {
            reversed_queue.push(temp_stack.top());
            temp_stack.pop();
        }

        while (!q.empty())
        {
            reversed_queue.push(q.front());
            q.pop();
        }

        return reversed_queue;
    }
};

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int k = 3;

    Solution obj;
    queue<int> modifiedQueue = obj.modifyQueue(q, k);

    while (!modifiedQueue.empty())
    {
        cout << modifiedQueue.front() << " ";
        modifiedQueue.pop();
    }

    return 0;
}
