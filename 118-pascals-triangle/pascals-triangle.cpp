class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> subans;
        for (int i = 0; i < numRows ; i++){
            if (i == 0){
                ans.push_back({1});
            } else if (i == 1){
                ans.push_back({1,1});
            } else{
                subans.push_back(1);
                for (int k = 0; k < i-1 ; k++){
                    subans.push_back(ans[i-1][k] + ans[i-1][k+1]);
                }
                subans.push_back(1);
                ans.push_back(subans);
                subans.clear();
            }
        }
        return ans;
    }
};