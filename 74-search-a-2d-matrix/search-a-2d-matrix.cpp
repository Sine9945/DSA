class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        // if (n == 1 && m == 1){
        //     if (matrix[0][0] == target) return true;
        //     else return false;
        // }
        int low1 = 0,low2 = 0;
        int high1 = n-1,high2 = m-1;

        int row_ans = 0;
        if (n > 1){
            while (low1 <= high1){
                int mid1 = (low1+high1)/2;
                if (target < matrix[mid1][0]){
                    high1 = mid1-1;
                } else {
                    low1 = mid1+1;
                }
            }
            row_ans = high1;
            if (row_ans < 0)
                return false;
        } else {
            row_ans = 0;
        }
        if (m > 1){
            while (low2 <= high2){
                int mid2 = (low2+high2)/2;
                if (target == matrix[row_ans][mid2]){
                    return true;
                } else if (target < matrix[row_ans][mid2]){
                    high2 = mid2-1;
                } else {
                    low2 = mid2+1;
                }
            }
        } else {
            if (matrix[row_ans][0] == target) return true;
            else return false;
        }
        return false;
    }
};