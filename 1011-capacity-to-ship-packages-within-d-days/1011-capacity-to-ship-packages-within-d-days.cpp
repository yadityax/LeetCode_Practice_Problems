class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        long long start = 0, end = 0, mid, ans;
        for (int i = 0; i <= weights.size() - 1; i++) {
            if (weights[i] > start)
                start = weights[i];
            end += weights[i];
        }

        while (start <= end) {
            mid = start + (end - start) / 2;
            long long wt = 0, Nodays = 1;
            for (int i = 0; i <= weights.size() - 1; i++) {
                wt += weights[i];
                if (wt > mid) {
                    Nodays++;
                    wt = weights[i];
                }
            }

            if (Nodays <= days) {
                ans = mid;
                end = mid - 1;
            } else
                start = mid + 1;
        }
        return ans;
    }
};