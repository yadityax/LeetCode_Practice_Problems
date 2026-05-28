class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {

        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {

      
            if (ans.size() < k) {
                ans.push_back(nums[i]);
            }


            else if (nums[i] != ans[ans.size() - k]) {
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};