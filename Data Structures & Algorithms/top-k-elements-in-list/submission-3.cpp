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
                if(p.second>=k)
                {
                    ans.push_back(p.first);
                }
            }
        return ans;
    }
};
