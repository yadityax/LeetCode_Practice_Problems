class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start = 0, mid, end = nums.size()-1;
        while(start <= end){
            mid = start + (end - start) / 2;
            if(nums[mid] == target)
                return true;
            if(nums[start] == nums[mid] && nums[mid] == nums[end]){
                start++;
                end--;
                continue;
            }
            // Left sorted array
            else if(nums[start] <= nums[mid])
            {
                if(nums[start] <= target && nums[mid] >= target)
                    end = mid - 1;
                else
                    start = mid + 1;
            }
            // Right sorted array
            else{
                if(nums[mid] <= target && target <= nums[end])
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }
        return false;
    }
};