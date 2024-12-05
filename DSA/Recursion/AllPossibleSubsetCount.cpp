// finding the single solution
#include <iostream>
#include <vector>
using namespace std;

int totalSubset(vector<int> &sample, int target, int sum, int index)
{
    // base cases
    if (sum > target)
        return 0;
    if (index == sample.size())
    {
        if (sum == target)
        {
            return 1;
        }
        else
            return 0;
    }

    int l = totalSubset(sample, target, sum + sample[index], index + 1);

    int r = totalSubset(sample, target, sum, index + 1);

    return l + r;
}

int main()
{
    vector<int> sample = {1, 2, 3, 4};
    int target = 3;
    cout << totalSubset(sample, target, 0, 0) << endl;
    return 0;
}