class Solution {
public:

    int atMost(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        int left = 0;
        int ans = 0;

        for (int right = 0; right < nums.size(); right++) {

            freq[nums[right]]++;

            // More than k distinct integers
            while (freq.size() > k) {
                freq[nums[left]]--;

                if (freq[nums[left]] == 0) {
                    freq.erase(nums[left]);
                }

                left++;
            }

            // Number of valid subarrays ending at right
            ans += right - left + 1;
        }

        return ans;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};