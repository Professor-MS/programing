#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

int main()
{
    int choice = 1;
    Node *newNode, *start, *temp;
    start = 0;
    while (choice == 1)
    {

        newNode = new Node;
        cout << "Enter data: ";
        cin >> newNode->data;
        newNode->next = 0;
        if (start == 0)
        {
            start = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        cout << "Do you want another data.(Yes=1/No=0)";
        cin >> choice;
        if (choice == 0)
        {
            cout << "Great! you are not Adding further data" << endl;
        }
        else if (choice != 0 && choice != 1)
        {
            cout << "invalid Input" << endl;
        }
    }

    // accessing each element of linked list
    temp = start;
    while (temp->next != 0)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }

    return 0;
}