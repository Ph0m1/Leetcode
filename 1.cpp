#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            auto ptr = map.find(target - nums[i]);
            if(ptr != map.end()){
                return {ptr->second,i};
            }
            map.insert(pair<int,int>(nums[i],i));
        } 
        return {};
    }
};