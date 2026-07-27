class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max = INT_MIN, secondmax = INT_MIN;
        for (int i=0;i<=nums.size()-1;i++){
            if(nums[i] > max){
                secondmax = max;
                max = nums[i];
            }
            else if(nums[i] > secondmax)
                secondmax = nums[i];
        }
        return (max-1) * (secondmax-1);
    }
};