// Problem Link : https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{

    bool isSafe(vector<vector<int>> &mat, int i, int j)
    {
        return i >= 0 && j >= 0 && i < mat.size() && j < mat[0].size() && mat[i][j] != 0;
    }

    void giveAns(vector<string> &ans, vector<vector<int>> &mat, int i, int j, string s)
    {
        // Base case: If we've reached the bottom-right corner
        if (i == mat.size() - 1 && j == mat[0].size() - 1)
        {
            ans.push_back(s);
            return;
        }
        mat[i][j] = 0;

        // Move down (i + 1, j)
        if (isSafe(mat, i + 1, j))
        {
            s += "D"; // Correct string concatenation
            giveAns(ans, mat, i + 1, j, s);
            s.pop_back(); // Undo the last move (backtracking)
        }

        // Move left (i, j - 1)
        if (isSafe(mat, i, j - 1))
        {
            s += "L";
            giveAns(ans, mat, i, j - 1, s);
            s.pop_back();
        }
        // Move right (i, j + 1)
        if (isSafe(mat, i, j + 1))
        {
            s += "R";
            giveAns(ans, mat, i, j + 1, s);
            s.pop_back();
        }

        // Move up (i - 1, j)
        if (isSafe(mat, i - 1, j))
        {
            s += "U";
            giveAns(ans, mat, i - 1, j, s);
            s.pop_back();
        }

        mat[i][j] = 1;
    }

public:
    vector<string> findPath(vector<vector<int>> &mat)
    {
        vector<string> ans;
        string s = "";
        int i = 0, j = 0;
        giveAns(ans, mat, i, j, s);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string input;
        getline(cin, input);
        vector<vector<int>> mat;
        string innerArray;
        bool isInsideArray = false;

        for (char c : input)
        {
            if (c == '[')
            {
                if (isInsideArray)
                {
                    innerArray.clear();
                }
                isInsideArray = true;
            }
            else if (c == ']')
            {
                if (isInsideArray && !innerArray.empty())
                {
                    vector<int> row;
                    stringstream ss(innerArray);
                    int num;

                    while (ss >> num)
                    {
                        row.push_back(num);
                        if (ss.peek() == ',')
                            ss.ignore();
                        while (isspace(ss.peek()))
                            ss.ignore();
                    }

                    mat.push_back(row);
                    innerArray.clear();
                }
                isInsideArray = false;
            }
            else if (isInsideArray)
            {
                if (!isspace(c))
                {
                    innerArray += c;
                }
            }
        }

        Solution obj;
        vector<string> result = obj.findPath(mat);
        sort(result.begin(), result.end());

        if (result.empty())
            cout << "[]";
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends