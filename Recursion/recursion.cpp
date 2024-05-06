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
long long recurs(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return x * recurs(x - 1);
    }
}
vector<long long> factorialNumbers(long long n)
{
    vector<long long> v;
    int i = 1;
    while (true)
    {
        long long fact = recurs(i);

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

// Reverse an array
void reverseArrayHelper(std::vector<int> &nums, int start, int end)
{
    // Base case: if start >= end, we have reversed the array
    if (start >= end)
    {
        return;
    }

    // Swap nums[start] and nums[end]
    int temp = nums[start];
    nums[start] = nums[end];
    nums[end] = temp;

    // Recursively reverse the remaining elements
    reverseArrayHelper(nums, start + 1, end - 1);
}
std::vector<int> reverseArray(int n, std::vector<int> &nums)
{
    // Call the helper function with start = 0 and end = n - 1
    reverseArrayHelper(nums, 0, n - 1);
    return nums;
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

    auto q = factorialNumbers(5);
    for (auto i : q)
    {
        cout << i << "=>";
    }
    return 0;
}