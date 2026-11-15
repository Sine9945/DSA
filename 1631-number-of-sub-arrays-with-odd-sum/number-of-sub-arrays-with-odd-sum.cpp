class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        long long ans = 0;
        int sum = 0;
        int even_parity = 1; 
        int odd_parity = 0;

        for (int x : arr) {
            sum = (sum + x) % 2;          // keep only parity, avoids overflow
            if (sum == 0) {
                ans += odd_parity;        // even prefix pairs with earlier odd ones
                even_parity++;
            } else {
                ans += even_parity;       // odd prefix pairs with earlier even ones
                odd_parity++;
            }
        }
        return (int)(ans % MOD);
    }
};