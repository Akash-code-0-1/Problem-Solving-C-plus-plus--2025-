#include <bits/stdc++.h>
using namespace std;

int evaluatePostfix(string exp)
{
    stack<int> stk;

    for (int i = 0; i < exp.size(); i++)
    {

        if (isdigit(exp[i]))
        {
            stk.push(exp[i] - '0');
        }
        else
        {
            int num1 = stk.top();
            stk.pop();
            int num2 = stk.top();
            stk.pop();

            switch (exp[i])
            {
            case '+':
                stk.push(num2 + num1);
                break;
            case '-':
                stk.push(num2 - num1);
                break;
            case '*':
                stk.push(num2 * num1);
                break;
            case '/':
                stk.push(num2 / num1);
                break;
            }
        }
    }
    return stk.top();
}

int main()
{
    string exp = "231*+9-";
    cout << evaluatePostfix(exp);
}