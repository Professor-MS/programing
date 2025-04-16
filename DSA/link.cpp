#include <iostream>
using namespace std;

// Define Node structure outside main()
struct Node
{
    int data;
    Node *next;
};

// Function to insert new node
void insertNode(Node **start, int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;

    if (*start == nullptr)
    {
        *start = newNode;
    }
    else
    {
        Node *temp = *start;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to traverse and print linked list
void traverseList(Node *start)
{
    cout << "Linked List: ";
    while (start != nullptr)
    {
        cout << start->data << " ";
        start = start->next;
    }
    cout << endl;
}

// Function to insert at beginning
void insertAtBeginning(Node **start, int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = *start;
    *start = newNode;
}

// Function to insert at specific position
void insertAtPosition(Node **start, int data, int pos)
{
    Node *newNode = new Node;
    newNode->data = data;

    if (pos == 0)
    {
        insertAtBeginning(start, data);
        return;
    }

    Node *temp = *start;
    for (int i = 0; i < pos - 1 && temp != nullptr; i++)
    {
        temp = temp->next;
    }

    if (temp == nullptr)
    {
        cout << "Position out of range." << endl;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to delete node
void deleteNode(Node **start, int data)
{
    if (*start == nullptr)
        return;

    if ((*start)->data == data)
    {
        Node *temp = *start;
        *start = (*start)->next;
        delete temp;
        return;
    }

    Node *temp = *start;
    while (temp->next != nullptr)
    {
        if (temp->next->data == data)
        {
            Node *nodeToDelete = temp->next;
            temp->next = temp->next->next;
            delete nodeToDelete;
            return;
        }
        temp = temp->next;
    }
}

int main()
{
    Node *start = nullptr;
    int choice = 1;

    while (choice == 1)
    {
        int data;
        cout << "Enter data: ";
        cin >> data;

        insertNode(&start, data);

        cout << "Do you want to add more data? (Yes=1/No=0): ";
        cin >> choice;
    }

    traverseList(start);

    // Insert at beginning
    insertAtBeginning(&start, 10);
    cout << "After inserting 10 at beginning: ";
    traverseList(start);

    // Insert at position
    insertAtPosition(&start, 20, 2);
    cout << "After inserting 20 at position 2: ";
    traverseList(start);

    // Delete node
    deleteNode(&start, 20);
    cout << "After deleting 20: ";
    traverseList(start);

    return 0;
}
