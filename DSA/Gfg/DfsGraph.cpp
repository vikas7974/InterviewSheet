// Problem Link : https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void DfsTraverse(vector<vector<int>> &adj, int TA[], vector<int> &temp, int node)
    {
        // base case

        // recurcision call
        for (const auto &newNode : adj[node])
            if (TA[newNode] == 0)
            {
                temp.push_back(newNode);
                TA[newNode] = 1;
                DfsTraverse(adj, TA, temp, newNode);
            }
    }

    vector<int> dfsOfGraph(vector<vector<int>> &adj)
    {
        int TraverseArray[adj.size()] = {0};
        vector<int> temp;
        temp.push_back(0);
        TraverseArray[0] = 1;
        DfsTraverse(adj, TraverseArray, temp, 0);
        return temp;
    }
};

//{ Driver Code Starts.

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        Solution obj;
        vector<int> ans = obj.dfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends