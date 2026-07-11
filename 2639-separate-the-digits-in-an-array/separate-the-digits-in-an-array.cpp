class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        vector<int> tempVec;
        for (auto it: nums){
            int temp = it;
            while (temp > 0){
                tempVec.insert(tempVec.begin(), temp%10);
                temp = temp/10;
            }
            while (!tempVec.empty()){
                ans.push_back(tempVec.front());
                tempVec.erase(tempVec.begin());
            }
        }
        return ans;
    }
};