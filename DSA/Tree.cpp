#include <iostream>
using namespace std;
/* Professor-MS */
struct node
{
    int information;
    node *leftSide;
    node *rightSide;
};
node *Tree()
{
    int data;
    node *NewNode = new node;
    cout << "\nEnter data into Node: ";
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    NewNode->information = data;
    cout << "\nEnter left Node of " << data << " :";
    NewNode->leftSide = Tree();
    cout << "\nEnter Right Node of " << data << " :";
    NewNode->rightSide = Tree();
    return NewNode;
}
node *PreOrder(node *rootNode)
{
    if (rootNode == NULL)
    {
        return NULL;
    }
    cout << rootNode->information << " ";
    PreOrder(rootNode->leftSide);
    PreOrder(rootNode->rightSide);
}
node *InOrder(node *rootNode)
{
    if (rootNode == NULL)
    {
        return NULL;
    }
    InOrder(rootNode->leftSide);
    cout << rootNode->information << " ";
    InOrder(rootNode->rightSide);
}
node *PostOrder(node *rootNode)
{
    if (rootNode == NULL)
    {
        return NULL;
    }
    PostOrder(rootNode->leftSide);
    PostOrder(rootNode->rightSide);
    cout << rootNode->information << " ";
}
int main()
{
    // node *n = new node;
    node *rootNode = NULL;
    rootNode = Tree();
    int TraversingOption;
    do
    {
        cout << "\n 1. PreOrder Traversing" << "\n 2. InOrder Traversing" << "\n 3. PostOrder Traversing.\n";
        cout << "\nChoose your Option: ";
        cin >> TraversingOption;
        switch (TraversingOption)
        {
        case 1:
            PreOrder(rootNode);
            break;
        case 2:
            InOrder(rootNode);
            break;
        case 3:
            PostOrder(rootNode);
            break;
        default:
            cout << "\n==========>>Select from the Given Choices.<<=========\n";
            break;
        }
    } while (TraversingOption);

    return 0;
}