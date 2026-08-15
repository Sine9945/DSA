class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int xr = nums[0];
        for (int i = 1; i < n; i++) {
            xr ^= nums[i];
        }

        if (xr != 0) return n;

        for (int i = 0; i < n ; i++){
            xr ^= nums[i];
            if (xr != 0) return n-1;
        }

        return ans;
    }
};