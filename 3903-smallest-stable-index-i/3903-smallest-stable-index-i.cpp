class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            int IS = 0;
            int p1 = 0, maxi= INT_MIN;
            while(p1<=i)
            {
                maxi = max(maxi,nums[p1]);
                p1++;
            }
            int p2 = i, mini = INT_MAX;
            while(p2<nums.size())
            {
                mini = min(mini,nums[p2]);
                p2++;
            }
            IS = maxi - mini;
            if(IS <= k)
                return i;
        }
        return -1;
    }
};