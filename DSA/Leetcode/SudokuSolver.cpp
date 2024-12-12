// Leetocde Problem 37

class Solution
{

    bool blackBox(vector<vector<char>> &board, char c, int row, int col)
    {
        for (int i = 0; i < 9; i++)
        {

            if (board[row][i] == c)
            {
                return false;
            }
            if (board[i][col] == c)
            {
                return false;
            }
            if (board[3 * (row / 3) + (i / 3)][3 * (col / 3) + (i % 3)] == c)
            {
                return false;
            }
        }
        return true;
    }

    bool validSudoku(vector<vector<char>> &board)
    {

        for (int row = 0; row < 9; row++)
        {
            for (int col = 0; col < 9; col++)
            {
                if (board[row][col] == '.')
                {
                    for (char temp = '1'; temp <= '9'; temp++)
                    {
                        if (blackBox(board, temp, row, col) == true)
                        {
                            board[row][col] = temp;
                            if (validSudoku(board) == true)
                                return true;
                            else
                                board[row][col] = '.';
                        }
                    }
                    return false;
                }
            }
        }

        return true;
    }

public:
    void solveSudoku(vector<vector<char>> &board)
    {
        validSudoku(board);
        return;
    }
};