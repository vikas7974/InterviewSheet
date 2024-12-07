// Leetcode Question 40

class Solution
{
public:
    void findCombination(vector<vector<int>> &mainDs, vector<int> &Ds, int index, vector<int> &candidates, int target)
    {
        if (target == 0)
        {
            mainDs.push_back(Ds);
            return;
        }

        for (int i = index; i < candidates.size(); i++)
        {
            if (i > index && candidates[i - 1] == candidates[i])
                continue;
            if (candidates[i] > target)
                break;
            Ds.push_back(candidates[i]);
            findCombination(mainDs, Ds, i + 1, candidates, target - candidates[i]);
            Ds.pop_back();
        }
        return;
    }

public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<vector<int>> mainDs;
        vector<int> Ds;
        int index = 0;
        sort(candidates.begin(), candidates.end());
        findCombination(mainDs, Ds, index, candidates, target);
        return mainDs;
    }
};