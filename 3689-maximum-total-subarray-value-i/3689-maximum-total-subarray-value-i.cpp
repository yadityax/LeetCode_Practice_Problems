class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {

        long long mx = nums[0];
        long long mn = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            mx = max(mx, (long long)nums[i]);
            mn = min(mn, (long long)nums[i]);
        }

        return 1LL * k * (mx - mn);
    }
};