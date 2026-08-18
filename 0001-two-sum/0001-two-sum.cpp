class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> targetsum;

        for (int i = 0; i < nums.size() - 1; i++) {

            for (int j = i + 1; j < nums.size(); j++) {

                if (nums[i] + nums[j] == target) {

                    targetsum.push_back(i);
                    targetsum.push_back(j);

                    return targetsum;
                }
            }
        }

        return targetsum;
    }
};