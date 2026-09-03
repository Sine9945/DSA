class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        unordered_map<char, int> roman = {
        {'I', 1}, {'V', 5}, {'X', 10}, 
        {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int ans = 0;
        int i = 0;
        while (i < n){
            auto it1 = roman.find(s[i]);
            auto it2 = roman.find(s[i+1]);
            if (i < n-1 && it1->second < it2->second){
                ans -= it1->second;
            } else{
                ans +=it1->second;
            }
            i++;
        }
        return ans;
    }
};