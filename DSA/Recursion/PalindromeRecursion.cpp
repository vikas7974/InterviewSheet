// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
bool pc(string str, int start, int end)
{
    if (start >= end)
        return true;
    if (str[start] != str[end])
        return false;
    return pc(str, start + 1, end - 1);
}
int main()
{
    string str = "AAAAA";
    int size = str.length();
    cout << pc(str, 0, size - 1);
    return 0;
}