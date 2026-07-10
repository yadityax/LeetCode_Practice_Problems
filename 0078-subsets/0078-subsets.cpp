class Solution {
public:

    vector<vector<int>> ans;

    void solve(vector<int>& nums, int index, vector<int>& current) {

        // Base case:
        // We have made a decision for every element
        if (index == nums.size()) {
            ans.push_back(current);
            return;
        }

        // Choice 1: Take nums[index]
        current.push_back(nums[index]);

        solve(nums, index + 1, current);

        // Backtrack: Undo the previous choice
        current.pop_back();

        // Choice 2: Don't take nums[index]
        solve(nums, index + 1, current);
    }

    vector<vector<int>> subsets(vector<int>& nums) {

        vector<int> current;

        solve(nums, 0, current);

        return ans;
    }
};