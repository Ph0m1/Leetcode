#include "leetcode.hpp"

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int l = 0, r = 0;
        while(r < s.size()){
            if(find(s.begin()+l, s.begin()+r, s[r]) == s.begin()+r){
                r++;
                ans = max(ans, r-l);
            } else {
                l++;
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    cout << s.lengthOfLongestSubstring("abcabcbb") << endl;
    cout << s.lengthOfLongestSubstring("bbbbb") << endl;
    cout << s.lengthOfLongestSubstring("pwwkew") << endl;
    return 0;
}