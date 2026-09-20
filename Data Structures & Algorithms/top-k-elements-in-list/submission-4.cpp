class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int ,int> mp;
        for(int i=0;i<n;i++)
        {
             mp[nums[i]]++;
        }
        vector<int> ans;
            for(auto &p:mp)
            {
            ans.push_back(p.first);
            }
       sort(ans.begin(),ans.end(),[&](int a,int b) {
            return mp[a]>mp[b];
        });
        ans.resize(k);
                return ans;
    }
};
