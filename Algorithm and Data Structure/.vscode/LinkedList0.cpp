#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void atHead(node *&head, int val)
{
    node *n = new node;
    n->data = val;
    if (head == 0)
    {
        n->next = 0;
        head = n;
        return;
    }
    n->next = head;
    head = n;
}

void atTail(node *&head, int val)
{
    node *n = new node;
    node *temp = head;
    n->data = val;
    n->next = 0;
    while (temp->next != 0)
    {

        temp = temp->next;
    }
    temp->next = n;
}

void atPosition(node *&head, int val, int pos)
{
    if (pos == 0)
    {
        atHead(head, val);
    }
    node *n = new node;
    node *temp = head;
    n->data = val;
    int currentpos = 0;

    while (currentpos != pos - 1)
    {

        temp = temp->next;
        currentpos++;
    }
    n->next = temp->next;
    temp->next = n;
}

void display(node *head)
{

    node *temp = head;
    while (temp != 0)
    {
        cout << temp->data << "->"; // 4->5->54
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    node *head = 0;

    atHead(head, 54);

    atHead(head, 5);

    atHead(head, 4);
    display(head);
    atTail(head, 9);
    atTail(head, 10);
    display(head);

    atPosition(head, 22, 3);
    display(head);
    system("pause");

    return 0;
}