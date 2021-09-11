// https://leetcode.com/problems/divisor-game/submissions/

class Solution
{

public:
    vector<int> dp;

    bool divisorGamehelper(int n)
    {

        if (n == 1)
        {
            return 0;
        }

        if (dp[n] != -1)
        {
            return dp[n];
        }

        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                if (divisorGamehelper(n - i) == 0)
                    return dp[n] = 1;
            }
        }

        return dp[n] = 0;
    }

    bool divisorGame(int n)
    {

        dp.resize(n + 1, -1);
        return divisorGamehelper(n);
    }
};