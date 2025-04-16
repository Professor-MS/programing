#include <iostream>
using namespace std;
int stack[5], n = 4, top = -1;
void Push(int x)
{
    if (top == n - 1)
    {
        cout << "Stack is Full" << endl;
    }
    else
    {
        top++;
        stack[top] = x;
    }
}
void Pop()
{
    if (top >= 0)
    {
        // top--;   //if you want to remove single element. then call this function once and uncomment this line.
        cout << "All Element are removed from the stack. " << endl;
        for (int i = top; i >= 0; i--)
        {
            // cout << top << endl; //if you want to display the poped element.
            top = top - 1;
        }
    }
    else
    {
        cout << "Stack is Empty" << endl;
    }
}
int Peek()
{
    return stack[top];
}
void Display()
{
    if (top >= 0)
    {
        cout << "Stack Elements are: " << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << "|" << stack[i] << "|" << endl;
        }
        cout << "---" << endl;
    }
    else
        cout << "Stack is Empty" << endl;
}

int main()
{
    Push(1);
    Push(2);
    Push(3);
    Push(4);
    // Push(5);
    Display();
    // Pop();
    // Display();
    int y = Peek();
    cout << "Top Element of the Stack is: " << y << endl;

    return 0;
}