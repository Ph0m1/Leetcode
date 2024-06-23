#include "leetcode.hpp"

class Solution {
public:
    long long maxScore(vector<int>& nums, int x) {
        vector<long long> f(2,-1000001);
        
        for(int i = 1; i< nums.size(); i++){
            f[nums[i] & 1] = max(f[nums[i] & 1], f[nums[i] & 1 ^ 1] - x) + nums[i];
        }
        return max(f[0],f[1]);
    }
};