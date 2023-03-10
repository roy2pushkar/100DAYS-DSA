class Solution {
public:
    string longestCommonPrefix(vector<string>& a) {
         string ans = "";
        for (int i = 0; i < a[0].size(); i++) {
            char cur = a[0][i];
            for (string s : a) {
                if (s.size() == i or s[i] != cur)
                   return ans;
            }
            ans += cur;
        }
        return ans;
    }
};
