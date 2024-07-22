#include "leetcode.hpp"
#include <algorithm>

class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int sum1 = arr[0], sum2 = 0, ans = arr[0];
        for(int i = 1; i < arr.size();i++){
            sum2 = max(sum1,sum2+arr[i]);
            sum1 = max(sum1,0) +arr[i];
            ans = max(ans,max(sum1,sum2));
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> arr = {1,-2,0,3};
    std::cout << s.maximumSum(arr) << std::endl;
}