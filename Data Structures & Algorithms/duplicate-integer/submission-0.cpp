class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool has = false;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]==nums[j])
                {
                    has=true;
                }
            }
        }
        return has;
    }
};