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

void printLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl; 
}

Node *deleteTail(Node *head)
{
    if (!head)
        return nullptr; 
    if (!head->next)
    {                
        delete head; 
        return nullptr;
    }
    Node *temp = head;
    while (temp->next->next)
    {
        temp = temp->next;
    }
    delete temp->next;   
    temp->next = nullptr; 
    return head;
}

int main()
{
    vector<int> arr = {1};
    if (arr.empty())
    { 
        cout << "List is empty" << endl;
        return 0;
    }

    Node *head = new Node(arr[0]);
    Node *temp = head;
    for (int i = 1; i < arr.size(); ++i)
    {
        Node *ele = new Node(arr[i]);
        temp->next = ele;
        temp = temp->next;
    }

    head = deleteTail(head); 
    printLL(head);

    while (head)
    {
        Node *next = head->next;
        delete head;
        head = next;
    }

    return 0;
}
