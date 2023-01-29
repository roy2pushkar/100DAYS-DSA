class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>count(256,0);
        int start=0;
        int end=0;
        int ans=0;
       while(end < s.length())
       {
           count[s[end]]++;
           while(count[s[end]]>1)
           {
               count[s[start]]--;
               start++;
           }
           ans=max(ans,end-start+1);
           end++;
       }
       return ans;


    }
};
