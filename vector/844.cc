#include "../leetcode.hpp"

class Solution {
public:
  bool backspaceCompare(string s, string t) {
    int n = s.size() - 1, m = t.size() - 1;
    while (n >= 0 || m >= 0) {
        int backs = 0, backt = 0;
        while(s[n] == '#'){
            backs++;
            n--;
        }
        while(t[m] == '#'){
            backt++;
            m--;
        }
        if(backs > 0){
            n -= backs;
            continue;
        }
        if(backt > 0){
            m -= backt;
            continue;
        }
        if(n < 0 || m < 0){
            break;
        }
        if(s[n--] != t[m--]){
            return false;
        }
    }
    return true;
  }
};