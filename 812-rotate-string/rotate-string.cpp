class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;
        string ans = s; 
        ans += s.substr(0, s.size() - 1);
        cout << ans << endl;
        if (ans.find(goal) != string::npos) return true;
        else return false;
    }
};