class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0, sum = 0;
        map<int,int> mp;
        for (int i = 0; i < n ; i++){
            sum += nums[i];
            if (sum == k){
                count++;
            }
            int rem = sum - k;
            if (mp.count(rem)){
                count += mp[rem];
            }
            mp[sum]++;
        }
        return count;
    }
};