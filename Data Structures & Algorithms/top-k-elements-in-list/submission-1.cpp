class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> res;
        for(int i=0;i<n;i++)
        {
        int ch=1;
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]==nums[j])
                {
                    ch++;
                    }
            }
                if(ch>=k)
                {
                        
                    if (find(res.begin(), res.end(), nums[i]) == res.end()) {
                    res.push_back(nums[i]);
                }
            }
        }
        return res;
    }
};
