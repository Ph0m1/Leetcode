#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int trap(vector<int> &height)
    {
        if (height.empty() || height.size() <= 2) return 0;

        auto left = height.begin();
        auto right = height.end() - 1;
        int sum = 0;

        int maxLeft = 0, maxRight = 0;

        while (left <= right)
        {
            maxLeft = max(maxLeft, *left);
            maxRight = max(maxRight, *right);

            if (maxLeft < maxRight) 
            {
                sum += maxLeft - *left;
                left++;
            }
            else
            {
                sum += maxRight - *right;
                right--;
            }
        }

        return sum;
    }
};
