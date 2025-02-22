#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    queue<int> reverseQueue(queue<int> &q)
    {
        stack<int> temp_stack;
        while (!q.empty())
        {
            temp_stack.push(q.front());
            q.pop();
        }
        queue<int> reverse_queue;
        while (!temp_stack.empty())
        {
            reverse_queue.push(temp_stack.top());
            temp_stack.pop();
        }
        return reverse_queue;
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

    Solution obj;
    queue<int> reversedQueue = obj.reverseQueue(q);

    while (!reversedQueue.empty())
    {
        cout << reversedQueue.front() << " ";
        reversedQueue.pop();
    }
}
