class Solution {
public:
    int maxProduct(int n) {
        int temp, lastd, second_d;
        vector<int> digits;
        while(n != 0){
            temp = n % 10;
            digits.push_back(temp);
            n = n / 10;            
        }
        sort(digits.begin(), digits.end());
        lastd = digits[digits.size()-1];
        second_d = digits[digits.size()-2];
        return lastd * second_d;
    }
};