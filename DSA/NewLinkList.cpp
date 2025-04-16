#include <iostream>
#include <memory>

class LinkedList
{
public:
    struct Node
    {
        int data;
        std::unique_ptr<Node> next;
    };

    void insert(int data);
    void traverse();
    void search(int item);

private:
    std::unique_ptr<Node> start;
    Node *temp;
};

void LinkedList::insert(int data)
{
    auto newNode = std::make_unique<Node>();
    newNode->data = data;
    newNode->next = nullptr;

    if (!start)
    {
        start = std::move(newNode);
        temp = start.get();
    }
    else
    {
        temp->next = std::move(newNode);
        temp = temp->next.get();
    }
}

void LinkedList::traverse()
{
    temp = start.get();
    while (temp)
    {
        std::cout << temp->data << " ";
        temp = temp->next.get();
    }
    std::cout << std::endl;
}

void LinkedList::search(int item)
{
    temp = start.get();
    while (temp && temp->data != item)
    {
        temp = temp->next.get();
    }

    if (!temp)
    {
        std::cout << "Item not found." << std::endl;
    }
    else
    {
        std::cout << "Found " << item << " at node " << temp << std::endl;
    }
}

int main()
{
    LinkedList list;
    int choice = 1;

    while (choice == 1)
    {
        int data;
        std::cout << "Enter data: ";
        std::cin >> data;

        list.insert(data);

        std::cout << "Do you want to add more data? (Yes=1/No=0): ";
        std::cin >> choice;
    }

    list.traverse();

    int item;
    std::cout << "Enter item to search: ";
    std::cin >> item;

    list.search(item);

    return 0;
}
