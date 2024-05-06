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

long long sumFirstN(long long n)
{
    if (n == 0)
        return 0;
    return (n + sumFirstN(n - 1));
}

// Your task is to return a sorted array (in increasing order) containing all the factorial numbers which are less than or equal to ‘n’.
long long recur(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return x * recur(x - 1);
    }
}
vector<long long> factorialNumbers(long long n)
{
    // Write Your Code Here
    vector<long long> v;
    while (true)
    {
        int i = 1;
        long long fact = recur(i);

        if (fact <= n)
        {
            v.push_back(fact);
            i++;
        }
        else
        {
            break;
        }
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

    cout << sumFirstN(5) << endl;
    return 0;
}