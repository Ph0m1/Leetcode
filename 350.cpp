#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> counter1;
        for(int num : nums1){
            counter1[num]++;
        }
        vector<int> result;
        for(int num : nums2){
            if(counter1[num] > 0){
                result.push_back(num);
                counter1[num]--;
            }
        }
        return result;
    }
};