class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        long long total = 0;
        for (int n : nums){
            total += n;
        }
        long long target = total-x;
        if (target < 0) return -1;
        if (target == 0) return n;

        int left = 0;
        long long sum = 0;
        int maxLen = -1;
        for(int i = 0; i < n ; i++){
            int right = i;
            sum += nums[right];
            while(sum > target && left <= right){
                sum -= nums[left];
                left++;
            }
            if (sum == target){
                maxLen = max(maxLen, right - left + 1);
            }
        }
        if (maxLen == -1) return -1;
        return n - maxLen;
    }
};