class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size(), s = 0, e = m-1;

        while(s < n && e >= 0){
            if(matrix[s][e] == target){
                return true;
            }
            else if(matrix[s][e] > target){
                e--;
            }
            else{
                s++;
            }
        }

        return false;
    }
};