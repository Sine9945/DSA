class Solution {
public:
    int largestInteger(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> subarray_count;
        int n = nums.size();

        for (int i = 0; i <= n - k; ++i) {
            std::unordered_set<int> unique_elements;
            for (int j = i; j < i + k; ++j) {
                unique_elements.insert(nums[j]);
            }
            
            for (int val : unique_elements) {
                subarray_count[val]++;
            }
        }

        int max_val = -1;
        for (const auto& [val, count] : subarray_count) {
            if (count == 1) {
                max_val = std::max(max_val, val);
            }
        }
        
        return max_val;
    }
};