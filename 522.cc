#include "leetcode.hpp"

class Solution {
public:
    int findLUSlength(vector<string>& strs) {
        // 最长非公共子序列
        int n = strs.size();
        int ans = -1;
        for (int i = 0; i < n; ++i) {
            bool flag = false;
            for (int j = 0; j < n; ++j) {
                if (i != j && isSubSeq(strs[i], strs[j])) {
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                ans = max(ans, (int)strs[i].size());
            }
        }
        return ans;
    }

private:
    bool isSubSeq(string a, string b) {
        int i = 0, j = 0;
        int m = a.size(), n = b.size();
        while (i < m && j < n) {
            if (a[i] == b[j]) {
                ++i;
            }
            ++j;
        }
        return i == m;
    }
};