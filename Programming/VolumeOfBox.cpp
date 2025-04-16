#include <iostream>
using namespace std;
class Box
{
public:
    double height;
    double width;
    double lenght;
    double getVolume();
    double setHeight(double hei)
    {
        height = hei;
    }
    double setWidth(double wid)
    {
        width = wid;
    }
    double setLenght(double len)
    {
        lenght = len;
    }
};
double Box::getVolume()
{
    return (height * width * lenght);
}
int main()
{
    Box Box1;
    Box1.setHeight(5.0);
    Box1.setWidth(8.0);
    Box1.setLenght(6.0);
    Box1.getVolume();
    cout << "The Volume of Box is " << Box1.getVolume() << endl;
    system("pause");
    return 0;
}