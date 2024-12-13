// Leetcode Problem 51

class Solution
{
    bool isSafe(int col, int row, vector<string> &board, int n)
    {
        int tempRow = row;
        int tempCol = col;

        col--;
        while (col >= 0)
        {
            if (board[row][col] == 'Q')
                return false;
            col--;
        }

        row = tempRow - 1;
        col = tempCol - 1;
        while (col >= 0 && row >= 0)
        {
            if (board[row][col] == 'Q')
                return false;
            row--;
            col--;
        }

        row = tempRow + 1;
        col = tempCol - 1;
        while (col >= 0 && row < n)
        {
            if (board[row][col] == 'Q')
                return false;
            row++;
            col--;
        }

        return true;
    }
    void Nqueen(vector<vector<string>> &mainDs, int n, vector<string> &board, int col)
    {
        // base
        if (col == n)
        {
            mainDs.push_back(board);
            return;
        }
        // recursion
        for (int i = 0; i < n; i++)
        {
            if (isSafe(col, i, board, n))
            {
                // dalo
                board[i][col] = 'Q';
                // recursion karo
                Nqueen(mainDs, n, board, col + 1);
                // nikalo
                board[i][col] = '.';
            }
        }
    }

public:
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> mainDs;
        vector<string> board(n);
        string temp(n, '.');
        for (int i = 0; i < n; i++)
            board[i] = temp;
        Nqueen(mainDs, n, board, 0);
        return mainDs;
    }
};