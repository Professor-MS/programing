#include <iostream>
#include <cmath>
using namespace std;
// const double M_PI = 3.14159;
class SimpleCalculation
{
protected:
    double FirstNo;
    double secondNo;

public:
    void setValue(double a, double b)
    {
        FirstNo = a;
        secondNo = b;
    }
    double showSum()
    {
        return (FirstNo + secondNo);
    }
    double showSub()
    {
        return (FirstNo - secondNo);
    }
    double showMul()
    {
        return (FirstNo * secondNo);
    }
    double showdDiv()
    {
        return (FirstNo / secondNo);
    }
};
class ScientificCalculation : public SimpleCalculation
{
private:
    double radians;

public:
    double SetRadian(double angle)
    {
        this->radians = angle * (M_PI / 180);
    }
    double showSine()
    {
        return sin(radians);
    }
    double showCos()
    {
        return cos(radians);
    }
    double showTan()
    {

        return tan(radians);
    }
};
int main()
{
    double a, b;
    cout << "Enter two Numbers ";
    cin >> a >> b;
    SimpleCalculation Cal;
    Cal.setValue(a, b);
    double G;
    G = Cal.showSum();
    cout << "The ADDITION of Two No is " << G << endl;
    cout << "The SUBTRACTION of Two No is " << Cal.showSub() << endl;
    cout << "The MULTIPLICATION of Two No is " << Cal.showMul() << endl;
    cout << "The DIVISION of Two No is " << Cal.showdDiv() << endl;
    double angle;
    cout << "Enter the Angle in Degree ";
    cin >> angle;
    ScientificCalculation ScCal;
    ScCal.SetRadian(angle);
    cout << "The Value of Sine " << angle << " is " << ScCal.showSine() << endl;
    cout << "The Value of Cos " << angle << " is " << ScCal.showCos() << endl;
    cout << "The Value of Tan " << angle << " is " << ScCal.showTan() << endl;
    // double radians=angle* (M_PI/180);
    // double sinValue=sin(radians);
    // double cosValue=cos(radians);
    // double tanValue=tan(radians);
    system("pause");
    return 0;
}
