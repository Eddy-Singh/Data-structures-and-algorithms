#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(string s)
    {
        deque<char> d;
        for (char c : s)
        {
            if (isalnum(c))
                d.emplace_back(tolower(c));
        }
        while (d.size() > 1)
        {
            if (d.front() != d.back())
                return false;
            d.pop_front();
            d.pop_back();
        }
        return true;
    }
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int l = 0;
        int r = numbers.size() - 1;

        while (l < r)
        {

            if (numbers[l] + numbers[r] > target)
                r--;

            if (numbers[l] + numbers[r] < target)
                l++;

            if (numbers[l] + numbers[r] == target)
                break;
        }
        return {l + 1, r + 1};
    }
};
