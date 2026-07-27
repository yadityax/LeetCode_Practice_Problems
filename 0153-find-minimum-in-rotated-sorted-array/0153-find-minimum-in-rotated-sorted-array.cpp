class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = nums[0], start = 0, mid, end = nums.size() - 1;
        while(start <= end){
            mid = start + (end - start) / 2;
            // Left side sorted array
            if(nums[mid] >= nums[0])
                start = mid + 1;
            // Right side sorted array
            else{
                ans = nums[mid];
                end = mid - 1;
            }
        }
        return ans;
    }
};