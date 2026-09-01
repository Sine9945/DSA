class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int mini = strs[0].size();

        for (int i = 0; i < n ; i++){
            if (strs[i].size() < mini){
                mini = strs[i].size();
            }
        }
        int ans = 0;
        for (int j = 0; j < mini ; j++){
            bool flag = true;
            for (int i = 0 ; i < n-1 ; i++){
                if (strs[i][j] != strs[i+1][j]){
                    flag = false;
                    break;
                }
            }
            if (flag == true) ans++;
            else break;
        }

        if (ans != 0) return strs[0].substr(0,ans);
        else return "";
    }
};