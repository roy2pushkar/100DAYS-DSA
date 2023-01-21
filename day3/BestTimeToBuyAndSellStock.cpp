class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mini=prices[0];
       int prft=0;
        int prft1;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<mini)
            {
                mini=prices[i];
            }
            prft1=prices[i]-mini;
            prft=max(prft , prft1);

        }
        return prft;

    }
};
