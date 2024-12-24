#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *deleteHead(Node *head)
{
    if (!head)
        return head;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = new Node(arr[0]);
    Node *temp = head;

    for (int i = 1; i < arr.size(); ++i)
    {
        Node *newEle = new Node(arr[i]);
        temp->next = newEle;
        temp = newEle;
    }

    head = deleteHead(head);

    temp = head;
    cout << "List after deletion of head: ";
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    temp = head;
    while (temp)
    {
        Node *toDelete = temp;
        temp = temp->next;
        delete toDelete;
    }

    return 0;
}
