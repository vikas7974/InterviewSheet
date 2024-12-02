#include <iostream>

using namespace std;

void ReverseAnArray(int arr[], int start, int end)
{
    // Base Case
    if (start == end || start > end)
        return;

    swap(arr[start], arr[end]);

    // Recursion Logic
    ReverseAnArray(arr, start + 1, end - 1);
}

int main()
{
    int arr[] = {1, 2, 6, 683, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int end = size - 1;
    ReverseAnArray(arr, 0, end);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}