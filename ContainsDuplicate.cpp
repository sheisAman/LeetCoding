// https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/578/

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {

        unordered_map<int, int> count;
        for (int i = 0; i < nums.size(); i++)
        {
            count[nums[i]]++;
            if (count[nums[i]] > 1)
            {
                return true;
            }
        }

        return false;
    }
};