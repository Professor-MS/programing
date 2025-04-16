#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
int main()
{
    Node *start, *temp;
    Node *newNode = new Node;
    int numNodes;
    cout << "Enter number of nodes: ";
    cin >> numNodes;
    cout << "Enter data for node 1: ";
    cin >> newNode->data;
    start = newNode;
    for (int i = 1; i < numNodes; i++)
    {
        temp = new Node;
        cout << "Enter data for node " << i + 1 << ": ";
        cin >> temp->data;
        newNode->next = temp;
        newNode = temp;
    }
    newNode->next = start;
    temp = start;
    cout << "Node You have create: ";
    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != start);
    cout << endl;
    system("pause");
    return 0;
}
