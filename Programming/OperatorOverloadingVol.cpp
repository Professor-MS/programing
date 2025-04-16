#include <iostream>
using namespace std;
class Box
{
private:
    int length;
    int width;
    int height;

public:
    int printVolume(void)
    {
        return (length * width * height);
    }
    void setLeng(int len)
    {
        length = len;
    }
    void setwid(int wid)
    {
        width = wid;
    }
    void sethei(int hei)
    {
        height = hei;
    }
    Box operator+(const Box &b) // overloaded function
    {
        Box box;
        box.length = this->length + b.length;
        box.width = this->width + b.width;
        box.height = this->height + b.height;
        return box;
    }
};

int main()
{
    Box box1;
    Box box2;
    Box box3;
    box1.setLeng(3);
    box1.setwid(2);
    box1.sethei(2);
    int volume = box1.printVolume();
    cout << "Volume of Box 1 " << volume << endl;
    box2.setLeng(1);
    box2.setwid(2);
    box2.sethei(2);
    volume = box2.printVolume();
    cout << "Volume of Box 2 " << volume << endl;
    // To Add volume of two boxes we use overloading function
    box3 = box1 + box2;
    volume = box3.printVolume();
    cout << "Volume of Box 3 " << volume << endl;
    return 0;
}