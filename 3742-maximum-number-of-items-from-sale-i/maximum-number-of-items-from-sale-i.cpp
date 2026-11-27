
class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n = items.size();

        vector<pair<int, int>> a(n);

        for (int i = 0; i < n; i++) {
            int cnt = 0;

            for (int j = 0; j < n; j++) {
                if (i != j && items[j][0] % items[i][0] == 0) {
                    cnt++;
                }
            }

            a[i] = {items[i][1], cnt + 1};
        }

        sort(a.rbegin(), a.rend());

        const int NEG = -1e9;

        vector<int> dp(budget + 1, NEG);
        dp[0] = 0;

        int ans = 0;

        int idx = 0;

        while (idx < n) {
            int p = a[idx].first;

            vector<int> has(budget + 1, NEG);

            int j = idx;

            while (j < n && a[j].first == p) {
                int v = a[j].second;

                for (int c = budget; c >= p; c--) {
                    if (has[c - p] != NEG) {
                        has[c] = max(has[c], has[c - p] + v);
                    }

                    if (dp[c - p] != NEG) {
                        has[c] = max(has[c], dp[c - p] + v);
                    }
                }

                j++;
            }

            for (int c = 0; c <= budget; c++) {
                if (has[c] != NEG) {
                    ans = max(ans, has[c] + (budget - c) / p);
                }
            }

            for (int k = idx; k < j; k++) {
                int cost = a[k].first;
                int value = a[k].second;

                for (int c = budget; c >= cost; c--) {
                    if (dp[c - cost] != NEG) {
                        dp[c] = max(dp[c], dp[c - cost] + value);
                    }
                }
            }

            idx = j;
        }

        return ans;
    }
};
