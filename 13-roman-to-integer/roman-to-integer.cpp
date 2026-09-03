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
            if (i < n-1 && s[i] == 'I' && s[i+1] == 'V'){
                ans += 4;
                i+=2;
            } else if (i < n-1 && s[i] == 'I' && s[i+1] == 'X'){
                ans += 9;
                i+=2;
            } else if (i < n-1 && s[i] == 'X' && s[i+1] == 'L'){
                ans += 40;
                i+=2;
            } else if (i < n-1 && s[i] == 'X' && s[i+1] == 'C'){
                ans += 90;
                i+=2;
            } else if (i < n-1 && s[i] == 'C' && s[i+1] == 'D'){
                ans += 400;
                i+=2;
            } else if (i < n-1 && s[i] == 'C' && s[i+1] == 'M'){
                ans += 900;
                i+=2;
            } else {
                auto it = roman.find(s[i]);
                ans += it->second;
                i++;
            }
        }
        return ans;
    }
};