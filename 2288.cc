#include "leetcode.hpp"
#include <string.h>


class Solution {
public:
    string discountPrices(string sentence, int discount) {
        int indx = 0;
        int n = sentence.size();
        string c = "0123456789";
        string ans;
        while (indx < n) {
            int st = indx;
            while (indx < n && sentence[indx] != ' ')
                ++indx;
            string word = sentence.substr(st, indx - st);
            if (word[0] == '$') {
                double v = 0.0;
                for (int i = 1; i < word.size(); ++i) {
                    v = v * 10 + word[i] - '0';
                    if(c.find(word[i])==-1){
                        v=-1;
                        break;
                    }
                }
                if(v<=0){
                    ans += word;
                    ans += " ";
                    ++indx;
                    continue;}
                v -= v * discount / 100;
                char buf[100];
                sprintf(buf, "$%.2lf", v*1.0);
                ans += buf;
            } else {
                ans += word;
            }
            ans += " ";
            ++indx; 
        }
        if (ans.size())
            ans.pop_back();
        return ans;
    }
};