
// https : //leetcode.com/problems/counting-bits/submissions/

class Solution
{
public:
    vector<int> countBits(int n)
    {

        if (n == 0)
        {
            vector<int> ans;
            ans.push_back(0);
            return ans;
        }

        vector<int> dp;
        dp.push_back(0);
        dp.push_back(1);

        for (int i = 2; i <= n; i++)
        {

            if (i % 2 == 0)
            {
                dp.push_back(dp[i / 2]);
            }
            else
                dp.push_back(dp[i / 2] + 1);
        }
        return dp;
    }
};

// OMG, this problem, I wasnt able to figure out the pattern myself🥺