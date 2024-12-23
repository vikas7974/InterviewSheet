// Problem 41 : https://leetcode.com/problems/first-missing-positive/description/

#include <iostream>
#include <vector>
#include <map>
class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        int n = nums.size();
        // swapping to make vector in ascending order like[0,1,2,3,4,5] by neglecting negative,values that are bigger
        // than the size of the input vector
        for (int i = 0; i < n; i++)
        {
            while (nums[i] > 0 and nums[i] <= n and nums[i] != nums[nums[i] - 1])
                swap(nums[i], nums[nums[i] - 1]);
        }
        // to search the smallest
        for (int i = 0; i < n; i++)
            if (nums[i] != i + 1)
                return i + 1;
        // for the case when all elements are present for example[1,2,3,4], n=nums.size()=4, so return n+1 i.e 5
        return n + 1;
    }
};