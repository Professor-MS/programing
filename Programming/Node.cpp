#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;
};
Node *head = NULL;
void Insert(int n)
{
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = head;
    newNode->prev = NULL;
}

int main()
{

    return 0;
}