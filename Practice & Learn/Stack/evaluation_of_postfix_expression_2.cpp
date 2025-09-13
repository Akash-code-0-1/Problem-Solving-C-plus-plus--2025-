#include <bits/stdc++.h>
using namespace std;

int evaluatePostfix(string exp)
{
    stack<int> stk;

    for (int i = 0; i < exp.size(); i++)
    {

        if (exp[i] == ' ')
        {
            continue;
        }
        else if (isdigit(exp[i]))
        {

            int num = 0;
            while (isdigit(exp[i]))
            {
                num = num * 10 + (int)(exp[i] - '0');
                i++;
            }
            i--;
            stk.push(num);
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
    string exp = "100 200 + 2 / 5 * 7 +";
    cout << evaluatePostfix(exp);
}