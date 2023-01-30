class Solution {
public:
    string longestPalindrome(string s) {
        int ans=1;
        string palinString;
        int n=s.length();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int start=i,end=j;
                bool flag=1;
                while(start<=end){
                    if(s[start]!=s[end])
                        flag=0;
                    start++,
                    end--;
                }
                if(flag){
                    ans=max(ans,j-i+1);
                    if(ans==j-i+1)
                        palinString=s.substr(i,j-i+1);
                }
            }
        }
        return palinString;
    }
};
