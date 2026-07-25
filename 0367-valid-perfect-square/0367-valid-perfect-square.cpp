class Solution {
public:
    bool isPerfectSquare(int num) {
        int ans, start = 1, mid, end = num;
        if(num<2)
            return true;
        while(start <= end){
            mid = start + (end - start) / 2;
            if(mid == num/mid && num % mid == 0)
                return true;
            else if(mid < num/mid)
                start = mid + 1;
            else 
                end = mid - 1;
        }
        return false;
    }
};