#include <iostream>
using namespace std;
int Larger(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
int CompareNo(int a, int b, int c)
{
    return Larger(a, Larger(b, c));
}
int main()
{
    int a, b, c, Z, Y;
    cout << "Enter Three Number: ";
    cin >> a >> b >> c;
    // Z=Larger(a,b);
    // cout<<"The Greater No in " <<a<< " and "<<b<<" is "<<Z<<endl;
    Y = CompareNo(a, b, c);
    cout << "The Greater number in " << a << ", " << b << " and " << c << " is " << Y << endl;
    system("pause>0");
    return 0;
}