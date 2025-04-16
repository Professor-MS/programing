#include <iostream>
using namespace std;

struct Node
{
    int Data;
    Node *Next = NULL;
};
void atHead(Node *&headNode, int value)
{
    Node *newNode = new Node;
    newNode->Data = value;
    // Node *temp = NULL;
    if (headNode == NULL)
    {
        headNode = newNode;
        return;
    }
    newNode->Next = headNode;
    headNode = newNode;
}
void Display(Node *headNode)
{
    if (headNode == NULL)
    {
        cout << "Empty LinkedList" << endl;
        return;
    }
    Node *temp = headNode;
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