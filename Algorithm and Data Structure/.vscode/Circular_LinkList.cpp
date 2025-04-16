#include <iostream>
using namespace std;

struct Node
{
    int Data;
    Node *Next = NULL;
};
void atHead(Node *&head, int val)
{
    Node *newNode = new Node;
    newNode->Data = val;
    // Node *temp = NULL;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->Next = head;
    head = newNode;
}
void Display(Node *head)
{
    if (head == NULL)
    {
        cout << "Empty LinkedList" << endl;
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->Data << " -> ";
        temp = temp->Next;
    }
    cout << endl;
}
int main()
{
    Node *first = NULL;
    atHead(first, 9);
    atHead(first, 5);
    atHead(first, 4);
    Display(first);

    system("pause");
    return 0;
}