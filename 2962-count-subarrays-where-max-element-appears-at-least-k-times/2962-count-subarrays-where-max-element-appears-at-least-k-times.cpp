class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxele = 0;
        for(int i=0;i<nums.size();i++)
        maxele = max(maxele, nums[i]);

        long long total = 0 ;
        int count = 0, start = 0, end = 0;

        while(end < nums.size())
        {
            if(nums[end] == maxele)
            count++;
            while(count == k)
            {
                total += nums.size()-end;
                if(nums[start] == maxele)
                count--;

                start++;
            }
            end++;
        }
        return total;
    }
};