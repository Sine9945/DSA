class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maximum = INT_MIN, sum = 0;
        int n = nums.size();
        for (int i = 0; i < n ; i++){
            sum = max(nums[i],sum += nums[i]);
            maximum = max(maximum,sum);
        }
        return maximum;
    }
};