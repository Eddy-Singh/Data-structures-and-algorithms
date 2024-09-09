
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // 1. Duplicate Integer
    bool hasDuplicate(vector<int> &nums)
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
    bool hasDuplicateAlternate(vector<int> &nums)
    { // good solution
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            s.emplace(nums[i]);
        }
        return (s.size() != nums.size());
    }
};
int main()
{

    return 0;
}