class Solution {
public:

    // int ways(int n, vector<int>& cost, vector<int>& dp){
    //     if(n<=1) return 0;

    //     if(dp[n]!=-1)  return dp[n];

    //     return dp[n] = min(cost[n-1]+ways(n-1,cost,dp), cost[n-2]+ways(n-2,cost,dp));
    // }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int curr, prev=0, prev1=0;

        for(int i=2;i<=n;i++){
            curr = min(cost[i-1]+prev, cost[i-2]+prev1);
            prev1 = prev;
            prev = curr;
        }
        return prev;
    }
};