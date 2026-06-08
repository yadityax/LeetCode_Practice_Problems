class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        vector<int> less;
        vector<int> equal;
        vector<int> greater;

        // Store elements in three separate vectors
        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] < pivot) {
                less.push_back(nums[i]);
            }
            else if (nums[i] == pivot) {
                equal.push_back(nums[i]);
            }
            else {
                greater.push_back(nums[i]);
            }
        }

        vector<int> result;

        // Add all elements less than pivot
        for (int i = 0; i < less.size(); i++) {
            result.push_back(less[i]);
        }

        // Add all elements equal to pivot
        for (int i = 0; i < equal.size(); i++) {
            result.push_back(equal[i]);
        }

        // Add all elements greater than pivot
        for (int i = 0; i < greater.size(); i++) {
            result.push_back(greater[i]);
        }

        return result;
    }
};