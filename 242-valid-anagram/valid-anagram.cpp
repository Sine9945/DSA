class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        int n = s.size();
        map<char,int> hmp1;
        map<char,int> hmp2;
        for (int i = 0; i < n ; i++){
            hmp1[s[i]]++;
            hmp2[t[i]]++;
        }
        if (hmp1 == hmp2) return true;
        else return false;
    }
};