class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        int pivot = n - 2;
        while (pivot >= 0 && nums[pivot] >= nums[pivot + 1]) {
            pivot--;
        }

        if (pivot >= 0) {
            int j = n - 1;
            while (nums[j] <= nums[pivot]) {
                j--;
            }
            swap(nums[pivot], nums[j]);
        }

        reverse(nums.begin() + pivot + 1, nums.end());
    }
};