class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        for (char c : s) {
            freq[c]++;
        }

        vector<pair<char, int>> v(freq.begin(), freq.end());

        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            if (a.second == b.second)
                return a.first < b.first;
            return a.second > b.second;
        });

        string ans;

        for (auto [ch, count] : v) {
            ans.append(count, ch);
        }
        return ans;
    }
};