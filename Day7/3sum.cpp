class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i==0 || (i>0 && nums[i-1]!=nums[i])){
                int newTarget=0-nums[i];
                int left=i+1;
                int right=n-1;
                while(left<right){
                    if(nums[left]+nums[right]==newTarget){
                        int x=nums[left++];
                        int y=nums[right--];
                        ans.push_back({nums[i],x,y});
                        while(left<right && nums[left]==x)    left++;
                        while(left<right && nums[right]==y) right--;
                    }else if(nums[left]+nums[right] > newTarget)
                            right--;
                        else left++;
                }
            }
        }
        return ans;
    }
};
