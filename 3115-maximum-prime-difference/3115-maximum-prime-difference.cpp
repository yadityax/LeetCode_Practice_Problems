class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {

        vector<int> prime;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] < 2)
                continue;

            bool isPrime = true;

            for (int j = 2; j * j <= nums[i]; j++) {

                if (nums[i] % j == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) {
                prime.push_back(i);
            }
        }

        if (prime.size() == 1)
            return 0;

        return prime.back() - prime.front();
    }
};