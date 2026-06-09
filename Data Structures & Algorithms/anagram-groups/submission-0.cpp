class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       // int n=str.size();
        unordered_map<string,vector<string>> mp;
        for(string s:strs)
        {
            string m=s;
            sort(m.begin(),m.end());

            mp[m].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto &it: mp)
        {
            ans.push_back(it.second);
        }
        return ans;    }
};
