class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int first = 0, second = 0, len = 0, zeros = 0;
        while(second<nums.size())
        {
            if(nums[second] == 0)
                zeros++;
            
            while(zeros > k)
            {
                if(nums[first] == 0)
                    zeros--;
                
                first++;
            }
            len = max(len, second-first+1);
            second++;
        }
        return len;
    }
};