
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
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int complement = target - nums[i];
            if (mp.find(complement) != mp.end())
            {
                return {mp[complement], i};
            }
            mp.insert({nums[i], i});
        }
        return {};
    }
    string encode(vector<string> &strs)
    {
        string s;
        for (auto i : strs)
        {
            s += to_string(i.length()) + "#" + i;
        }
        return s;
    }
    vector<string> decode(string s)
    {
        vector<string> ans;
        int i = 0;
        while (i < s.length())
        {
            int j = i;
            while (s[j] != '#')
            {
                j++;
            }
            int length = stoi(s.substr(i, j - i));
            ans.emplace_back(s.substr(j + 1, length));
            i = j + 1 + length;
        }
        return ans;
    }
    // 5. Top K Frequent Elements
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> m;
        priority_queue<pair<int, int>> pq;
        for (auto i : nums)
        {
            m[i]++;
        }
        for (auto i : m)
        {
            pq.emplace(i.second, i.first);
        }
        vector<int> ans;
        for (int i = 0; i < k; i++)
        {
            ans.emplace_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
int main()
{

    return 0;
}