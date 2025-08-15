#include <queue>
#include <iostream>

using namespace std;

class MyStack
{
public:
    queue<int> que;

    MyStack() {}

    // Push operation: Insert element and rotate previous elements to the back
    void push(int x)
    {
        que.push(x); // Step 1: Insert x at the back
        int n = que.size();

        // Step 2: Rotate (n-1) elements to move x to the front
        for (int i = 0; i < n - 1; i++)
        {
            que.push(que.front()); // Move front element to back
            que.pop();             // Remove the front element
        }
    }

    // Pop operation: Remove the top element (front of the queue)
    int pop()
    {
        if (que.empty())
        {
            cout << "Stack is empty!" << endl;
            return -1; // Handle empty stack case
        }
        int result = que.front();
        que.pop();
        return result;
    }

    // Top operation: Return the top element (front of the queue)
    int top()
    {
        if (que.empty())
        {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return que.front();
    }

    // Check if stack is empty
    bool empty()
    {
        return que.empty();
    }
};

// **Test the implementation**
int main()
{
    MyStack stk;

    stk.push(1);
    stk.push(2);
    stk.push(3);

    cout << "Top element: " << stk.top() << endl;                 // Expected: 3
    cout << "Popped: " << stk.pop() << endl;                      // Expected: 3
    cout << "Top element: " << stk.top() << endl;                 // Expected: 2
    cout << "Popped: " << stk.pop() << endl;                      // Expected: 2
    cout << "Popped: " << stk.pop() << endl;                      // Expected: 1
    cout << "Is empty? " << (stk.empty() ? "Yes" : "No") << endl; // Expected: Yes

    return 0;
}
