class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();

        if (n <= 1) return s;

        int maxi = 1;
        int left_idx = 0, right_idx = 0;

        for (int i = 0; i < n; i++) {

            int left = i;
            int right = i;

            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 > maxi) {
                    maxi = right - left + 1;
                    left_idx = left;
                    right_idx = right;
                }
                left--;
                right++;
            }

            left = i;
            right = i + 1;

            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 > maxi) {
                    maxi = right - left + 1;
                    left_idx = left;
                    right_idx = right;
                }
                left--;
                right++;
            }
        }

        return s.substr(left_idx, right_idx - left_idx + 1);
    }
};