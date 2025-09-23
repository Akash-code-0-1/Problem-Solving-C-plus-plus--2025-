#include <bits/stdc++.h>
using namespace std;

class MyQueue {
private:
    stack<int> inStack;
    stack<int> outStack;

    void transfer() {
        if (outStack.empty()){
            while (!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
    }

public:
    MyQueue() {}

    void push(int x) { inStack.push(x); }

    int pop() {
        transfer();
        int topVal = outStack.top();
        outStack.pop();
        return topVal;
    }

    int peek() {
        transfer();
        return outStack.top();
    }

    bool empty() { return inStack.empty() && outStack.empty(); }
};

int main() {
    MyQueue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.peek() << endl;
    cout << q.pop() << endl;
    cout << q.peek() << endl;
    cout << q.empty() << endl;
    q.pop();
    q.pop();
    cout << q.empty() << endl;
    return 0;
}
