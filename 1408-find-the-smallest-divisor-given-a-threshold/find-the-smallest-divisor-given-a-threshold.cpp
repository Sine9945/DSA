class Solution {
public:
    bool func(vector<int>&nums, int threshold, int divisor){
        int n = nums.size();  
        int sum = 0;
        for (int i = 0; i < n ; i++){
            sum += (nums[i] + divisor - 1) / divisor;
        }
        if (sum <= threshold) return true;
        else return false;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int ans;
        while (low <= high){
            int mid = low + (high - low)/2;
            if (func(nums, threshold, mid)){
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};