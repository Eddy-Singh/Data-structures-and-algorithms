#include <bits/stdc++.h>
using namespace std;

vector<int> printNos(int x, vector<int> v = {})
{
    if (x > 0)
    {
        v = printNos(x - 1, v);
        v.push_back(x);
    }
    return v;
}

vector<string> printNTimes(int n, vector<string> v = {})
{
    if (n == 0)
        return v;
    v.emplace_back("Hello");
    return printNTimes(n - 1, v);
}

void recur(int x, vector<int> &v)
{
    if (x == 0)
        return;
    v.push_back(x);
    recur(--x, v);
}
vector<int> printNum(int x)
{
    vector<int> v;
    recur(x, v);
    return v;
}

int main()
{
    auto j = printNos(5);
    for (auto i : j)
    {
        cout << i << " ";
    }

    auto p = printNTimes(5);
    for (auto i : p)
    {
        cout << i << " ";
    }

    auto k = printNum(5);
    for (auto i : k)
    {
        cout << i << " ";
    }
    return 0;
}