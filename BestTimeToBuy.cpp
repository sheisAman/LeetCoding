
class Solution
{
public:
    // Brute Force:
    // starting from index = 0; check for each index ahead, and find max for that iteration
    //repeat the sam process until index < n
    // TC : O(n*n) && SC : O(1)

    // Better approach
    // assume min = arr[0];
    // declare profit = 0; bcz anyway thats gonna be the minimum profit
    // below that it will be counted as loss
    // now calculate arr[0] - several indexes ahead, if it comes out to be greter than profit, update profit
    // but if in middle of all this you came across a number which is lesser than arr[0]
    // make it minimum

    // Main motive : find leftmost minimum element
    int maxProfit(vector<int> &prices)
    {

        int min = prices[0];
        int profit = 0;

        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < min)
            {
                min = prices[i];
            }
            int pf = prices[i] - min;
            if (pf > profit)
                profit = pf;
        }

        return profit;
    }
};