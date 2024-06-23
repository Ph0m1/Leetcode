#include "leetcode.hpp"

class Solution {
public:
    int temperatureTrend(vector<int>& temperatureA, vector<int>& temperatureB) {
        int ans = 0;
        int left = 0;
        int right = 0;
        for (int i = 0; i < temperatureA.size()-1; ++i) {
             if((temperatureA[i] < temperatureA[i+1] && temperatureB[i] < temperatureB[i+1] )
                || (temperatureA[i] > temperatureA[i+1] && temperatureB[i] > temperatureB[i+1] )
                || (temperatureA[i] == temperatureA[i+1] && temperatureB[i] == temperatureB[i+1])) {
                    right++;
            }else{
                ans = ans<right-left?right-left:ans;
                left = ++right;
            }
            if(i == temperatureA.size()-2)
                ans = ans<right-left?right-left:ans;//最后一个区间
        }
        return ans;
    }
};