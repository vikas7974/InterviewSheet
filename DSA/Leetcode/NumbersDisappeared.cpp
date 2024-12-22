// Leetcode Problem 448: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        vector<int> vik;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[abs(nums[i]) - 1] > 0)
            {
                nums[abs(nums[i]) - 1] *= -1;
            }
        }
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] > 0)
            {
                vik.push_back(j + 1);
            }
        }
        return vik;
    }
};