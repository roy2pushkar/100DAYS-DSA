class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      vector<vector<string>> res;
      unordered_map<string,vector<string>>mp;
      for(int i=0;i<strs.size();i++)
      {
          string temp=strs[i];
          sort(strs[i].begin(),strs[i].end());
          mp[strs[i]].push_back(temp);
      }

      for(auto it = mp.begin();it!=mp.end();it++)
      {
          res.push_back(it->second);
      }
    return res;
    }
};
