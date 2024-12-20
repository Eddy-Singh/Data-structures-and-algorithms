#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        stack<int> st;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.emplace(s[i]);

            else
            {
                if (st.empty())
                    return false;
                char c = st.top();
                if ((s[i] == ')' && c != '(') ||
                    (s[i] == '}' && c != '{') ||
                    (s[i] == ']' && c != '['))
                    return false;
                st.pop();
            }
        }
        return true;
    }
};
class MinStack
{
public:
    stack<int> stk;
    stack<int> minStk;
    MinStack() {}

    void push(int val)
    {
        if (minStk.empty() || minStk.top() >= val)
            minStk.emplace(val);
        stk.emplace(val);
    }

    void pop()
    {
        if (minStk.top() == stk.top())
            minStk.pop();
        stk.pop();
    }

    int top()
    {
        return stk.top();
    }

    int getMin()
    {
        return minStk.top();
    }
};

int main()
{

    return 0;
}
