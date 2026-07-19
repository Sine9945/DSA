class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0, sum = 0;
        map<int,int> mp;
        mp[0] = 1;
        for (int i = 0; i < n ; i++){
            sum += nums[i];
            int rem = sum - k;
            if (mp.count(rem)){
                count += mp[rem];
            }
            mp[sum]++;
        }
        return count;
    }
};