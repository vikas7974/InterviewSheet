// Leetcode Problem 344


class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        char c;
        int len = s.size() - 1;
        for (int i = 0; i <= len / 2; i++)
        {
            swap(s[i], s[len - i]);
        }
    }
};