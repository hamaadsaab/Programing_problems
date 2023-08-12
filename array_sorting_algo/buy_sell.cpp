class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int svalue = prices[0];
        int profit = 0;
        int op = 0;

        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < svalue)
            {
                svalue = prices[i];
            }

            profit = prices[i] - svalue;

            if (profit > op)
            {
                op = profit;
            }
        }
        return op;
    }
};