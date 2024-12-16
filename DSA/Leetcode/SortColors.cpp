// Leetcode Problem 75

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int len = nums.size();
        // traversing one by one
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
            {
                if (nums[i] < nums[j])
                {
                    // swap
                    swap(nums[i], nums[j]);
                }
            }
        }
    }
};