class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
        int n = nums.size();

        // Find the indices of minimum and maximum elements
        int minIndex = 0;
        int maxIndex = 0;

        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[minIndex]) {
                minIndex = i;
            }

            if (nums[i] > nums[maxIndex]) {
                maxIndex = i;
            }
        }

        // Make left the smaller index
        // and right the larger index
        int left = min(minIndex, maxIndex);
        int right = max(minIndex, maxIndex);

        // Case 1: Remove both elements from the front
        int fromFront = right + 1;

        // Case 2: Remove both elements from the back
        int fromBack = n - left;

        // Case 3: Remove one from the front and one from the back
        int fromBoth = (left + 1) + (n - right);

        // Return the minimum of the three cases
        return min(fromFront, min(fromBack, fromBoth));
    }
};