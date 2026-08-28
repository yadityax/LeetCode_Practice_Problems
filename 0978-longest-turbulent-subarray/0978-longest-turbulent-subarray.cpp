class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int n = arr.size();
        int ans = 1;
        int len = 1;

        for (int i = 1; i < n; i++) {
            int cmp = 0;

            if (arr[i - 1] < arr[i]) cmp = 1;
            else if (arr[i - 1] > arr[i]) cmp = -1;

            if (cmp == 0) {
                len = 1;
            } else if (i == 1 ||
                       (arr[i - 2] < arr[i - 1] && arr[i - 1] > arr[i]) ||
                       (arr[i - 2] > arr[i - 1] && arr[i - 1] < arr[i])) {
                len++;
            } else {
                len = 2;
            }

            ans = max(ans, len);
        }

        return ans;
    }
};