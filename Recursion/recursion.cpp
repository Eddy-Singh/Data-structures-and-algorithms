#include <bits/stdc++.h>
using namespace std;
#include <string>

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
    if (start >= end)
    {
        return;
    }
    int temp = nums[start];
    nums[start] = nums[end];
    nums[end] = temp;

    reverseArrayHelper(nums, start + 1, end - 1);
}
vector<int> reverseArray(int n, std::vector<int> &nums)
{
    reverseArrayHelper(nums, 0, n - 1);
    return nums;
}

// Determine if a given string ‘S’ is a palindrome using recursion. Return a Boolean value of true if it is a palindrome and false if it is not.
bool isPalindrome(string &str)
{
    // Write your code here.
    int size = str.size();
    int start = 0;
    int end = size - 1;
    string copy = str;
    while (start < end)
    {
        swap(copy[start], copy[end]);

        start++;
        end--;
    }
    return (copy == str);
}

vector<int> generateFibonacciNumbers(int n)
{
    vector<int> result;
    int a = 0;
    int b = 1;
    for (int i = a; i < n; i++)
    {
        result.push_back(a);
        int next = a + b;
        a = b;
        b = next;
    }
    return result;
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