// Recursion for subsequence
#include <iostream>
#include <vector>
using namespace std;

void subsequence(vector<int> &ds, vector<int> &arr, int index)
{
    if (index >= arr.size())
    {
        if (ds.size() == 0)
            cout << "{ }";
        else
        {
            cout << "{" << " ";
            for (int i : ds)
            {
                cout << i << " ";
            }
            cout << "}" << " ";
            cout << endl;
        }
        return;
    }
    ds.push_back(arr[index]);
    subsequence(ds, arr, index + 1);
    ds.pop_back();
    subsequence(ds, arr, index + 1);
    return;
}

int main()
{
    vector<int> arr = {3, 2, 1};
    vector<int> ds;
    subsequence(ds, arr, 0);
    return 0;
}