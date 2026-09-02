class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        array<int, 26> freq{};
        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        for (int x : freq) {
            if (x != 0) return false;
        }
        return true;
    }
};