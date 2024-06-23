#include "leetcode.hpp"

class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        int l = 0, r = 0;
        while (r < nums.size()) {
            if(nums[r] - nums[l] > 2*k){
                l++;
            }
            ans = max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};