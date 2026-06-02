class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {

        int n = landStartTime.size();
        int m = waterStartTime.size();

        int ans = INT_MAX;

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < m; j++) {

                // Land -> Water
                int finishLand =
                    landStartTime[i] + landDuration[i];

                int startWater =
                    max(finishLand, waterStartTime[j]);

                int finish1 =
                    startWater + waterDuration[j];

                ans = min(ans, finish1);

                // Water -> Land
                int finishWater =
                    waterStartTime[j] + waterDuration[j];

                int startLand =
                    max(finishWater, landStartTime[i]);

                int finish2 =
                    startLand + landDuration[i];

                ans = min(ans, finish2);
            }
        }

        return ans;
    }
};