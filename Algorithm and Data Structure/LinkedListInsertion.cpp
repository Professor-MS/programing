#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *Next;
};
int main()
{
    Node *head, *temp;
    Node *newNode = new Node;
    // newNode->Next, head = NULL;
    int numNode;
    cout << "Enter Number of Node ";
    cin >> numNode;
    cout << "Enter Data into Node ";
    cin >> newNode->data;
    head = newNode;
    for (int i = 1; i < numNode; i++)
    {
        temp = new Node;
        cin >> temp->data;
        newNode->Next = temp;
        newNode = temp;
    }
    newNode->Next = head;
    temp = head;
    do
    {
        cout << "[ " << temp->data << " ] ";
        temp = temp->Next;
    } while (temp != head);
    cout << endl;

    return 0;
}