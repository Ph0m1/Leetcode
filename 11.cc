#include "leetcode.hpp"

class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
    for (int i = 0, j = height.size() - 1; i < j;) { 
        ans = max((height[i] < height[j] ? height[i] : height[j]) * (j - i), ans);
        (height[i] < height[j] ? i++ : j--);
    }
        return ans;
    }
};