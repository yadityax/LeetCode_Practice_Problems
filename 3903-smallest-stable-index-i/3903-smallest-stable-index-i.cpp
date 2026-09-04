class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> sufmin(nums.size(),INT_MAX);
        sufmin[nums.size()-1] = nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--)
        {
            sufmin[i] = min(sufmin[i+1],nums[i]);
        }
        int maxsofar = 0;
        for(int i=0;i<nums.size();i++)
        {
            int IS = 0;
            maxsofar = max(maxsofar,nums[i]);
            IS = maxsofar - sufmin[i];
            if(IS <= k)
                return i;
        }
        return -1;
    }
};