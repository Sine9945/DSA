#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int count_0 = 0, count_1 = 0, count_2 = 0;
        for (auto it: nums){
            if (it == 0) {
                count_0++;
            } else if (it == 1) {
                count_1++;
            } else {
                count_2++
                ;
            }
        }
        int i = 0;
        while (count_0--) {
            nums[i++] = 0;
        }
        while (count_1--) {
            nums[i++] = 1;
        }
        while (count_2--) {
            nums[i++] = 2;
        }
    }
};