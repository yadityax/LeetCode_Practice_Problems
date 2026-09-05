class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> suffixmin(nums.size(), INT_MAX);
        suffixmin[nums.size()-1] = nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            suffixmin[i] = min(suffixmin[i+1],nums[i]);
        }
        int maxsofar = INT_MIN;
        for(int i=0;i<nums.size();i++){
            int IS = 0;
            maxsofar = max(maxsofar,nums[i]);
            IS = maxsofar - suffixmin[i];
            if(IS <= k)
                return i;
        }
        return -1;
    }
};