#include "leetcode.hpp"
#include <algorithm>
#include <climits>
#include <ranges>

class Solution {
public:
    int maxPointsInsideSquare(vector<vector<int>>& points, string s) {
        int n = points.size();
        int mp[26];
        std::fill(std::begin(mp), std::end(mp), INT_MAX);
        int min = INT_MAX;
        for(int i = 0; i < n; i++){
            int d = std::max(abs(points[i][0]), abs(points[i][1]));
            if(d < mp[s[i] - 'a']){
                mp[s[i] - 'a'] = d;
                min = std::min(min, mp[s[i] - 'a']);
                mp[s[i] - 'a'] = d;
            }else{
                min = std::min(min, d);
            }
        }
        int ans = 0;
        for (int d : mp) {
            ans += d < min;
        }
        return ans;
    }        
};
