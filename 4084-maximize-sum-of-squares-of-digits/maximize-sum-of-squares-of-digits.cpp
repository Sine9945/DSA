class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans = "";
        if (sum < 9){
            ans += to_string(sum);
            for (int i = 0; i < num-1 ; i++){
                ans += "0";
            }
            return ans;
        }
        for (int i = 0; i < num ; i++){
            if (sum >= 9){
                ans += "9";
                sum -= 9;
            } else {
                ans += to_string(sum);
                sum = 0;
            }
        }
        if (sum == 0){
            return ans;
        } else {
            return "";
        }
    }
};