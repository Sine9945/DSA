class Solution {
public:

    bool canWePlace(vector<int>&position, int dist, int m){
        int n = position.size();
        int last = position[0];
        int cnt = 1;
        for (int i = 0; i < n ; i++){
            if (position[i] >= last + dist){
                cnt++;
                last = position[i];
            }
            if (cnt >= m) return true;
        }
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n = position.size();
        int mx = position[n-1];
        int mn = position[0];
        int high = mx - mn;
        int low = 1;
        while (low <= high){
            int mid = low + (high - low)/2;
            if (canWePlace(position,mid,m)){
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return high;
    }
};