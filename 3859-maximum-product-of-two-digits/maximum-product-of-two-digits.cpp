class Solution {
public:
    int maxProduct(int n) {
        vector<int> digits;
        int temp = n;
        while (temp > 0){
            digits.push_back(temp % 10);
            temp /= 10;
        }
        sort(digits.begin(), digits.end());
        int s = digits.size();
        return digits[s-1] * digits[s-2];
    }
};