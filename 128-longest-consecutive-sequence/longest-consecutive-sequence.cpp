class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size(),length = 0,maxi = 0;
        if (n == 0){
            return 0;
        }
        set<int> s;
        map<int,int> m;
        for (int i = 0; i < n ; i++){
            s.insert(nums[i]);
        }
        vector<int> temp(s.begin(), s.end());

        for (int i = 0 ; i < temp.size()-1 ; i++){
            if (temp[i+1] == temp[i]+1){
                length++;
                maxi = max(maxi,length);
            }else{
                length = 0;
            }
        }
        return maxi+1;
    }
};