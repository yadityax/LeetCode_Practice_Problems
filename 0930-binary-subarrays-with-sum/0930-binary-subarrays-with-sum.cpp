class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int total = 0;
        int PrefixSum = 0;
        unordered_map<int,int>freq;
        freq[0] = 1;
        for(int i=0;i<nums.size();i++)
        {
            PrefixSum += nums[i];
            if(freq.count(PrefixSum - goal))
            {
                total += freq[PrefixSum - goal];
                freq[PrefixSum]++;
            }
            else
                freq[PrefixSum]++;
        }
        return total;
    }
};