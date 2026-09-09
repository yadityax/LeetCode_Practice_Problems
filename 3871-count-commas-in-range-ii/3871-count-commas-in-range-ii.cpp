class Solution {
public:
    long long countCommas(long long n) {
        long long commas = 0;
        long long start = 1000;
        long long commaCount = 1;

        while (start <= n) {
            long long end = start * 1000 - 1;

            if (end > n) {
                end = n;
            }

            commas += (end - start + 1) * commaCount;

            start *= 1000;
            commaCount++;
        }

        return commas;
    }
};