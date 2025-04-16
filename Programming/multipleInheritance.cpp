#include <iostream>
using namespace std;
class shape
{
protected:
    int height;
    int width;

public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
};
class paintCost
{
public:
    int setCost(double area)
    {
        return area * 50;
    }
};
class Rectangle : public shape, public paintCost
{
public:
    int setArea()
    {
        return (height * width);
    }
};
int main()
{
    Rectangle Rect, Triangle;
    Rect.setHeight(5);
    Rect.setWidth(10);
    double area, cost;
    area = Rect.setArea();
    cout << "Area of The Rectangle in Feet is " << area << "ft." << endl;
    cost = Rect.setCost(area);
    cout << area << "ft Area will Cost to Paint in Dollar " << cost << "$." << endl;
    system("pause");
    return 0;
}