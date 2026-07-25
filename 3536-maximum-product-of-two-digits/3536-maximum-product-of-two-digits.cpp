class Solution {
public:
    int maxProduct(int n) {
        int largest = 0, secondLarg = 0;
        while(n != 0){
            int digit = n % 10;

            if(digit >= largest){
                secondLarg = largest;
                largest = digit;
            }
            else if(digit > secondLarg){
                secondLarg = digit;
            }
            n = n / 10;
        }
        return largest * secondLarg;
    }
};