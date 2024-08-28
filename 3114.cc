#include "leetcode.hpp"

class Solution {
public:
  string findLatestTime(string s) {
    auto index = s.find('?');
    do {
      if (index == 0) {
        if (s[index + 1] < '2' || s[index + 1] == '?') {
          s[index] = '1';
        } else {
          s[index] = '0';
        }
      }
      if (index == 1) {
        if (s[index - 1] == '1') {
          s[index] = '1';
        } else {
          s[index] = '9';
        }
      }
      if (index == 3) {
        s[index] = '5';
      }
      if (index == 4) {
        s[index] = '9';
      }
      index = s.find('?');
    } while (index != std::string::npos);
    return s;
  }
};