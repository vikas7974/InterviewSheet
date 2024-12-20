//  Linked List playground

#include <iostream>
#include <vector>

using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int tempData)
    {
        data = tempData;
        next = nullptr;
    }
    // Constructor second
    Node(int tempData, Node *ptr)
    {
        data = tempData;
        next = ptr;
    }
};

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = new Node(arr[0]);
    Node *temp = head;
    int i = 1;
    while (i < arr.size())
    {
        Node *ele = new Node(arr[i]);
        temp->next = ele;
        temp = ele;
        i++;
    }
    temp = head;
    int count = 0;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
        count++;
    }
    cout << endl
         << "Total nodes in the LL: " << count << endl;
    return 0;
}
