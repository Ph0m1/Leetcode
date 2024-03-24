#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> result;
        unordered_set<int> nums_set(nums1.begin(),nums1.end());
        for(int nums : nums2){
            if(nums_set.find(nums) != nums_set.end()){
                result.insert(nums);
            }
        }
        return vector<int>(result.begin(),result.end());
    }
};