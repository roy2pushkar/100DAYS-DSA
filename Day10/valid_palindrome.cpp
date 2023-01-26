class Solution {
public:
    bool isAnagram(string s, string t) {
        //using Unordered_map
 /*
 unordered_map<char,int>mp1,mp2;
     if (s.size()!=t.size()) return false;

		unordered_map <char, int> mp;
        for (char i:s)
           mp[i]++;
        for(char i:t) {
             mp[i]--;
            if (mp[i]<0)
              return false;
        }

        return true;
        */
        //Brute force
        if (s.size()!=t.size())
           return false;
           int n=s.size();
           int m=t.size();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;

    }
};
