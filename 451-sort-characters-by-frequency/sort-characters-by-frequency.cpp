class Solution {
public:
    string frequencySort(string s) {
        vector<pair<char, int>> v;

        for (char c : s) {
            bool found = false;

            for (auto p : v) {
                if (p.first == c) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                v.push_back({c, count(s.begin(), s.end(), c)});
            }
        }
        sort(v.begin(), v.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            if (a.second == b.second) {
                return a.first < b.first;
            }
            return a.second > b.second;
        });
        string ans;

        for (auto p : v) {
            for (int j = 0; j < p.second; j++) {
                ans += p.first;
            }
        }
        return ans;
    }
};