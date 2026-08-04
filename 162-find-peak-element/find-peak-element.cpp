class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 0;
        int low = 0;
        int high = n-1;
        while (low <= high){
            int mid = low + (high - low)/2;

            if (mid == 0){
                if (nums[mid] > nums[mid + 1]){
                    return mid;
                }
            } else if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1]){
                return mid;
            }

            if (low == 0){
                if (nums[low] > nums[low + 1]){
                    return low;
                }
            } else if (nums[low - 1] < nums[low] && nums[low] > nums[low + 1]){
                return low;
            }

            if (high == n-1){
                if (nums[high] > nums[n - 2]){
                    return high;
                }
            } else if(nums[high - 1] < nums[high] && nums[high] > nums[high + 1]){
                return high;
            }

            low++;
            high--;
        }
        return -1;
    }
};