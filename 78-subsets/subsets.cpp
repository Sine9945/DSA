
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        int subsets = 1 << n;

        for (int i = 0; i < subsets; i++) {
            vector<int> l;
            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) {
                    l.push_back(nums[j]);
                }
            }
            ans.push_back(l);
        }

        return ans;
    }
};
