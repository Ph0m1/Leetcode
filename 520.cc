#include "leetcode.hpp"

class Solution {
public:
    bool detectCapitalUse(string word) {
        // 全部大写或全部小写或首字母大写

        int upper = 0, lower = 0;
        for(auto c : word) {
            if(c >= 'A' && c <= 'Z') upper++;
            else lower++;
        }
        
        if(upper == word.size() || lower == word.size()) return true;
        if(upper == 1 && word[0] >= 'A' && word[0] <= 'Z') return true;
        return true;
    }
    
};