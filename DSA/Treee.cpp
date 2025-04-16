#include <QApplication>
#include <QWidget>
#include <QPainter>
#include <queue>
#include <iostream>
using namespace std;

// Structure for the tree node
struct TreeNode
{
    int value;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

// Class for rendering the binary tree
class BinaryTreeWidget : public QWidget
{
private:
    TreeNode *root;

public:
    BinaryTreeWidget(TreeNode *rootNode, QWidget *parent = nullptr) : QWidget(parent), root(rootNode) {}

protected:
    void paintEvent(QPaintEvent *) override
    {
        if (root)
        {
            QPainter painter(this);
            painter.setRenderHint(QPainter::Antialiasing);
            drawTree(&painter, root, width() / 2, 50, width() / 4, 80);
        }
    }

    void drawTree(QPainter *painter, TreeNode *node, int x, int y, int xOffset, int yOffset)
    {
        if (!node)
            return;

        // Draw left child
        if (node->left)
        {
            painter->drawLine(x, y + 20, x - xOffset, y + yOffset - 20);
            drawTree(painter, node->left, x - xOffset, y + yOffset, xOffset / 2, yOffset);
        }

        // Draw right child
        if (node->right)
        {
            painter->drawLine(x, y + 20, x + xOffset, y + yOffset - 20);
            drawTree(painter, node->right, x + xOffset, y + yOffset, xOffset / 2, yOffset);
        }

        // Draw the current node
        painter->setBrush(Qt::green);
        painter->drawEllipse(x - 20, y, 40, 40);

        // Draw the node value
        painter->setPen(Qt::white);
        painter->setFont(QFont("Arial", 10, QFont::Bold));
        painter->drawText(x - 10, y + 25, QString::number(node->value));
    }
};

// Function to insert a value into the binary tree
TreeNode *insertNode(TreeNode *root, int value)
{
    if (!root)
        return new TreeNode(value);

    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        TreeNode *current = q.front();
        q.pop();

        if (!current->left)
        {
            current->left = new TreeNode(value);
            break;
        }
        else
        {
            q.push(current->left);
        }

        if (!current->right)
        {
            current->right = new TreeNode(value);
            break;
        }
        else
        {
            q.push(current->right);
        }
    }
    return root;
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    TreeNode *root = nullptr;
    int choice, value;

    while (true)
    {
        cout << "Binary Tree Operations:\n";
        cout << "1. Insert Node\n";
        cout << "2. Display Tree Graphically\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to insert: ";
            cin >> value;
            root = insertNode(root, value);
            break;

        case 2:
            if (!root)
            {
                cout << "Tree is empty.\n";
            }
            else
            {
                BinaryTreeWidget treeWidget(root);
                treeWidget.resize(800, 600);
                treeWidget.setWindowTitle("Binary Tree Visualization");
                treeWidget.show();
                app.exec(); // Launch the Qt application
            }
            break;

        case 3:
            cout << "Exiting...\n";
            return 0;

        default:
            cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
