#include "leetcode.hpp"
#include <algorithm>

class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int ans = 0, sum = 0, flag = 0;
        for(int i = 0; i < arr.size(); ++i){
            if(arr[i] < 0){
                flag++;
                if(flag % 2 == 0){
                ans = max(ans, sum);
                sum = 0;
                }
                continue;
            }
            sum = max(ans, sum + arr[i]);
        }
        ans = max(sum, ans);
        if(ans == 0) {
            std::sort(arr.begin(), arr.end());
            ans = arr[arr.size() - 1];
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> arr = {1,-2,0,3};
    std::cout << s.maximumSum(arr) << std::endl;
}