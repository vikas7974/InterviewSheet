// Question Link : https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{

    void BfsTraverse(vector<int> &temp, int nodes, vector<vector<int>> &adj)
    {
        queue<int> Q;
        int arr[nodes] = {0};
        Q.push(0);
        arr[0] = 1;
        temp.push_back(0);
        while (!Q.empty())
        {
            for (const auto &i : adj[Q.front()])
            {
                if (arr[i] != 1)
                {
                    temp.push_back(i);
                    Q.push(i);
                    arr[i] = 1;
                }
            }
            Q.pop();
        }

        return;
    }

public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(vector<vector<int>> &adj)
    {
        vector<int> temp;
        int nodes = adj.size();
        BfsTraverse(temp, nodes, adj);
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

        // Now using vector of vectors instead of array of vectors
        vector<vector<int>> adj(V);

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u); // For undirected graph, add both u->v and v->u
        }

        Solution obj;
        vector<int> ans = obj.bfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends