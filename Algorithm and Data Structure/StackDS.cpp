#include <iostream>
using namespace std;
int Stack[5], n = 5, top = -1;

void push(int x)
{
    if (top == n - 1)
    {
        cout << "Stack is Full\n";
    }
    else
    {
        top++;
        Stack[top] = x;
    }
}
void pop()
{
    if (top == -1)
    {
        cout << "Stack is Empty\n";
    }
    else
    {
        cout << "The popped element is: " << Stack[top] << endl;
        top--;
    }
}
void display()
{
    if (top >= 0)
    {
        cout << "Stack element are: " << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << Stack[i] << endl;
        }
    }
    else
    {
        cout << "Stack is Empty.\n";
    }
}
int Peek()
{

    return Stack[top];
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();
    pop();
    // pop();
    // display();
    int a = Peek();
    cout << "The top Element of the Stack is: " << a << endl;

    return 0;
}