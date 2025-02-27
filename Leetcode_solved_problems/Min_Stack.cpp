#include <bits/stdc++.h>
using namespace std;

class MinStack
{
private:
    stack<int> st;
    stack<int> minSt;

public:
    MinStack() {}

    void push(int val)
    {
        st.push(val);
        if (minSt.empty() || val <= minSt.top())
        {
            minSt.push(val);
        }
    }

    void pop()
    {
        if (st.top() == minSt.top())
        {
            minSt.pop();
        }
        st.pop();
    }

    int top()
    {
        return st.top();
    }

    int getMin()
    {
        return minSt.top();
    }
};

int main()
{
    MinStack *obj = new MinStack();

    obj->push(5);
    obj->push(2);
    obj->push(8);
    obj->push(1);
    cout << obj->getMin() << endl;
    obj->pop();
    cout << obj->getMin() << endl;
    cout << obj->top() << endl;

    delete obj;
    return 0;
}
