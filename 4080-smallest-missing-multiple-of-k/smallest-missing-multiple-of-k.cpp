class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        for  (int i = 0; i < n ; i++){          
            int target = k*(i+1);

            bool found = find(begin(nums), end(nums), target) != end(nums);

            if (!found) {
                return k*(i+1);
            }
        }
        return k*(n+1);
    }
};