// We have three Solutions


//------------------------------------------------------------------------
// #1 without removing DUPLICATES


#include <iostream>
#include <vector>

using namespace std;

void SubseqSum(vector<int> &arr, vector<int> &sum, int target, int start, int currentsum)
{

    if (start >= arr.size())
    {
        if (currentsum == target)
        {
            for (int element : sum)
                cout << element << " ";
            cout << endl;
        }
        return;
    }
    // Add to vector,select
    sum.push_back(arr[start]);
    // function call for not selected
    SubseqSum(arr, sum, target, start + 1, currentsum + arr[start]);
    // Pop out from vector, not select
    sum.pop_back();
    // function call for not selected
    SubseqSum(arr, sum, target, start + 1, currentsum);
    return;
}

int main()
{
    int target = 3;
    int currentsum = 0;
    vector<int> arr = {1, 1, 2, 1};
    vector<int> sum;
    SubseqSum(arr, sum, target, 0, currentsum);

    return 0;
}


//------------------------------------------------------------------------
// # DUPLICATES has been removed

//# 2.1 By using sets

#include <iostream>
#include <vector>
#include <set>

using namespace std;

void SubseqSum(vector<int> &arr, vector<int> &sum, int target, int start, int currentsum, set<vector<int>> &result)
{
    // Base case: when we reach the end of the array
    if (start >= arr.size())
    {
        if (currentsum == target)
        {
            // Insert the current subsequence into the set (duplicates are automatically avoided)
            result.insert(sum);
        }
        return;
    }

    // Include the current element in the subset
    sum.push_back(arr[start]);
    SubseqSum(arr, sum, target, start + 1, currentsum + arr[start], result);

    // Exclude the current element from the subset
    sum.pop_back();
    SubseqSum(arr, sum, target, start + 1, currentsum, result);
}

int main()
{
    int target = 3;
    int currentsum = 0;
    vector<int> arr = {1, 1, 2, 1};
    vector<int> sum;
    set<vector<int>> result; // Set to store unique subsets

    // Initial call to the recursive function
    SubseqSum(arr, sum, target, 0, currentsum, result);

    // Print the unique subsets
    for (const auto &subset : result)
    {
        for (int element : subset)
        {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}

//-------------------------------------


// #2.2 By using the Wehile loop

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void SubseqSum(vector<int> &arr, vector<int> &sum, int target, int start, int currentsum)
{
    // Base case: if we've considered all elements
    if (start >= arr.size())
    {
        if (currentsum == target)
        {
            for (int element : sum)
            {
                cout << element << " ";
            }
            cout << endl;
        }
        return;
    }

    // Include the current element in the subsequence
    sum.push_back(arr[start]);
    SubseqSum(arr, sum, target, start + 1, currentsum + arr[start]);

    // Exclude the current element from the subsequence
    sum.pop_back();

    // Skip duplicates: only recurse to the next different element
    while (start + 1 < arr.size() && arr[start] == arr[start + 1])
    {
        start++;
    }

    SubseqSum(arr, sum, target, start + 1, currentsum);
}

int main()
{
    int target = 3;
    int currentsum = 0;
    vector<int> arr = {1, 1, 2, 1};
    vector<int> sum;

    // Sort the array to ensure duplicates are next to each other
    sort(arr.begin(), arr.end());

    // Initial call to the recursive function
    SubseqSum(arr, sum, target, 0, currentsum);

    return 0;
}



//-------------------------------------------------------------------------
