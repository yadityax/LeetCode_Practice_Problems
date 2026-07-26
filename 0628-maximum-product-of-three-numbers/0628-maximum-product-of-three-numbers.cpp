class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int larg = INT_MIN, Secondlarg = INT_MIN, Thirdlarg = INT_MIN;
        int smallest = INT_MAX, Secondsmall = INT_MAX;
        for (int i = 0; i <= nums.size() - 1; i++) {
            // Three largest
            if (nums[i] > larg) {
                Thirdlarg = Secondlarg;
                Secondlarg = larg;
                larg = nums[i];
            } else if (nums[i] > Secondlarg) {
                Thirdlarg = Secondlarg;
                Secondlarg = nums[i];
            } else if (nums[i] > Thirdlarg) {
                Thirdlarg = nums[i];
            }

            // Two smallest
            if(nums[i] < smallest){
                Secondsmall = smallest;
                smallest = nums[i];
            }
            else if(nums[i] < Secondsmall){
                Secondsmall = nums[i];
            }
        }
        return max(larg * Secondlarg * Thirdlarg, larg * smallest * Secondsmall );
    }
};