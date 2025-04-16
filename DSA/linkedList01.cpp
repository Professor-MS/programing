#include <iostream>
using namespace std;
struct node
{

    int data;
    node *next = NULL;
};
void insertathead(node *&head, int val)
{
    node *newnode = new node;
    newnode->data = val;
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}
void print(node *head)
{
    if (head == NULL)
    {
        cout << "Empty linked list.";
        return;
    }
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}
void insertatend(node *head, int val)
{
    node *newnode = new node;
    newnode->data = val;
    if (head == NULL)
    {
        insertathead(head, val);
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
void inseratposition(node *&head, int val, int pos)
{
    node *newnode = new node;
    if (head == NULL)
    {
        insertathead(head, val); // if the linked list is empty
        return;
    }
    node *temp = head;
    int count = 1;
    while (temp->next != NULL && count < pos - 1)
    {
        temp = temp->next;
        count += 1;
    }
    newnode->data = val;
    newnode->next = temp->next;
    temp->next = newnode;
}
void deleteathead(node *&head)
{
    if (head == NULL)
    {
        cout << "Empty linked list.";
        return;
    }
    node *temp = head;
    head = head->next;
    delete temp;
}
void deletatpos(node *&head, int pos)
{
    if (head == NULL)
    {
        cout << "Empty linked list.";
        return;
    }
    node *temp = head;
    int count = 1;
    while (temp->next != NULL && count < pos - 1)
    {
        temp = temp->next;
    }
    node *tempp = temp->next;
    temp->next = temp->next->next;
    delete tempp;
}
int main()
{
    node *first = NULL;
    // node *rafiq = new node;//creating Node before all Nodes
    // rafiq->next = first;
    // first = rafiq;
    // cout << "Enter value:";
    // cin >> rafiq->data;
    insertathead(first, 22);
    print(first);
    cout << endl;
    insertathead(first, 33);
    print(first);
    cout << endl;
    insertathead(first, 44);
    print(first);
    cout << endl;
    insertatend(first, 70);
    print(first);
    cout << endl;
    insertatend(first, 80);
    print(first);
    cout << endl;
    insertatend(first, 90);
    print(first);
    cout << endl;
    insertatend(first, 100);
    print(first);
    inseratposition(first, 900, 2);
    cout << endl;
    print(first);
    inseratposition(first, 900, 4);
    cout << endl;
    print(first);
    // deleteathead(first);

    cout << endl;
    print(first);
    deletatpos(first, 4);
    cout << endl;
    print(first);
    return 0;
}