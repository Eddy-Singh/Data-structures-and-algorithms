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

int main()
{
    auto j = printNos(5);
    for (auto i : j)
    {
        cout << i << " ";
    }
    return 0;
}