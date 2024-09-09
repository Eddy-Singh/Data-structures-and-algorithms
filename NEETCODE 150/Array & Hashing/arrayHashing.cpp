
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // 1. Duplicate Integer
    bool hasDuplicate1(vector<int> &nums)
    { // bruteforce
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool hasDuplicate2(vector<int> &nums)
    { // good solution
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            s.emplace(nums[i]);
        }
        return (s.size() != nums.size());
    }

    // 2. Is Anagram
    bool isAnagram1(string s, string t)
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }

    bool isAnagram2(string s, string t)
    {
        // good solution
        if (s.length() != t.length())
            return false;

        int n = s.length();

        unordered_map<char, int> a;
        unordered_map<char, int> b;

        for (int i = 0; i < n; i++)
        {
            a[s[i]]++;
            b[t[i]]++;
        }

        if (a == b)
            return true;

        return false;
    }
};
int main()
{

    return 0;
}