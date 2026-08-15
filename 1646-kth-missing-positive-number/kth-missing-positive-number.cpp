class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int i = 1;
        int j = 0;
        int cnt = 0;
        int ans = -1;
        while (true){
            if (j < n && i != arr[j]){
                cnt++;
            } else if (j >= n){
                cnt++;
            } else if (j < n && i == arr[j]){
                j++;
            }
            if (cnt == k){
                ans = i;
                break;
            }
            i++;
        }
        return ans;
    }
};