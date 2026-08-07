class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0] <= target && matrix[i][matrix[0].size()-1] >= target){
                int start = 0, end = matrix[0].size()-1, mid;
                while(start <= end){
                    mid = start + (end - start) / 2;

                    if(matrix[i][mid] == target)
                        return true;
                    else if(matrix[i][mid] < target)
                        start = mid + 1;
                    else
                        end = mid - 1;
                }
            }
        }
            return false;
    }
};