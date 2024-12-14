// Leetcode Problem 46

class Solution
{
    void permuteCount(vector<vector<int>> &mainDs, int pointer, vector<int> &nums)
    {
        // Base condition
        if (pointer == nums.size() - 1)
        {
            mainDs.push_back(nums);
            return;
        }

        // Selecting other permutations by recurcsion
        for (int i = pointer; i < nums.size(); i++)
        {
            swap(nums[pointer], nums[i]);
            permuteCount(mainDs, pointer + 1, nums);
            swap(nums[i], nums[pointer]);
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> mainDs;
        permuteCount(mainDs, 0, nums);
        return mainDs;
    }
};