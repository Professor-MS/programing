#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    cout << "Enter your Number ";
    cin >> a >> b;

    try
    {
        if (b != 0)
        {
            c = a / b;
            cout << "The Division is  " << c << endl;
        }
        else
            throw(b);
    }
    catch (float b)
    {
        cout << "The denominator must non zero" << endl;
    }

    return 0;
}
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b, c;
//     cout << "Enter your numbers: ";
//     cin >> a >> b;

//     try
//     {
//         if (b == 0)
//         {
//             throw b;
//         }
//         c = a / b;
//         cout << "I am Here " << c << endl;
//     }
//     catch (int e)
//     {
//         cout << "Invalid! Division by zero is not allowed." << endl;
//     }

//     return 0;
// }