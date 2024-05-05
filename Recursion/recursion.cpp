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

    return 0;
}