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
    Node *start = nullptr;
    Node *temp;

    while (choice == 1)
    {
        Node *newNode = new Node;
        cout << "Enter data: ";
        cin >> newNode->data;
        newNode->next = nullptr;

        if (start == nullptr)
        {
            start = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }

        cout << "Do you want to add more data? (Yes=1/No=0): ";
        cin >> choice;
    }
    // Traversing
    cout << "Linked List: ";
    temp = start;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    // searching
    int item;
    cout << "Enter item to Search in data: ";
    cin >> item;
    temp = start;
    while (temp != nullptr && temp->data != item)
        temp = temp->next;

    if (temp == nullptr)
    {
        cout << "Item not found: " << endl;
    }
    else
    {
        cout << temp << " is the location of " << item << endl;
    }

    return 0;
}
