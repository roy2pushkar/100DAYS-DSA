class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //Brute Force Approach
        //T.C:O(n*n)

       /*

       int ans = INT_MIN;
        for(int i = 0; i < nums.size(); i++) {
            int curProd = 1;
            for(int j = i; j < nums.size(); j++)
            {
                curProd *= nums[j],
                ans = max(ans, curProd);
        }
        }
        return ans;
        */
       //Optimised Approach
        //T.C:O(n)
        int curr_product=1;
        int max_product=INT_MIN;
        for(int i=0;i<nums.size();i++){
            curr_product*=nums[i];
            max_product=max(max_product,curr_product);
            if(curr_product==0)curr_product=1;
        }

        curr_product=1;
        for(int i=nums.size()-1;i>=0;i--){
            curr_product*=nums[i];
            max_product=max(max_product,curr_product);
            if(curr_product==0)curr_product=1;
        }
        return max_product;
    }
};
