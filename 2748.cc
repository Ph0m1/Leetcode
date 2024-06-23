#include "leetcode.hpp"
#include <numeric>

class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int ans = 0;
        
        for(int i = 0; i < nums.size(); ++i){
            while (nums[i] >= 10) {
                nums[i] /= 10;
            }
            int a = nums[i];
            for(int j = i + 1; j < nums.size(); ++j){
                int b = nums[j] % 10;
                if(a==b) continue;
                if(1==gcd(a, b)){
                    ans++;
                }
            }
         }
         return ans;
    }
};