class Solution {
public:

    vector<vector<int>> ans;

    void solve(vector<int>& nums,
               vector<int>& current,
               vector<bool>& used) {

        if (current.size() == nums.size()) {

            ans.push_back(current);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {

            if (used[i]) {
                continue;
            }

            if (i > 0 &&
                nums[i] == nums[i - 1] &&
                used[i - 1] == false) {

                continue;
            }

            current.push_back(nums[i]);
            used[i] = true;

            solve(nums, current, used);

            current.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<int> current;

        vector<bool> used(nums.size(), false);

        solve(nums, current, used);

        return ans;
    }
};