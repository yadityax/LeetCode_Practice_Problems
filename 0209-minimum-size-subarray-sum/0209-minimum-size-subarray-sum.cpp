class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // int min_length = nums.size() + 1, length;
        // for(int i=0;i<nums.size();i++){
        //     int sum = 0;
        //     for(int j=i;j<nums.size();j++){
        //         sum += nums[j];
        //         if(sum >= target)
        //         {
        //             length = j - i + 1;
        //             if(length < min_length){
        //                 min_length = length;
        //             }
        //         }
        //     }
        // }
        // if(min_length == nums.size() + 1) {
        //     return 0;
        // }
        // return min_length;
        int start = 0, end = 0, total = INT_MAX;
        int sum = 0;
        while(end < nums.size())
        {
            sum += nums[end]; //add number to the sum

            while(sum >= target)
            {
                total = min(total,end-start+1);
                sum -= nums[start++];
            }
            end++;
        }
        return total == INT_MAX ? 0:total;
    }
};