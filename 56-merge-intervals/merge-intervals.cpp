class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        int start = intervals[0][0];
        int end = intervals[0][1];
        for (int i = 0; i < n ; i++){
            int currStart = intervals[i][0];
            int currEnd = intervals[i][1];
            if (currStart <= end){
                end = max(end, currEnd);
                if (i == n - 1){
                    ans.push_back({start, end});
                }
            } else {
                ans.push_back({start, end});
                start = currStart;
                end = currEnd;
                if (i == n - 1){
                    ans.push_back({start, end});
                }
            }
        }
    return ans;
    }
};