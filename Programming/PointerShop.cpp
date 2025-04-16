// Array of Object Using Pointer
#include <iostream>
using namespace std;
class Shopitem
{
public:
    int id;
    int price;
    void setData(int a, int b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "The Id of Item is " << id << endl;
        cout << "The Price of Item is " << price << endl;
    }
};

int main()
{
    int size;
    cout << "Enter No of Items ";
    cin >> size;
    Shopitem *ptr = new Shopitem[size];
    Shopitem *ptrTemp = ptr;
    int p, q, i;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter ID and Price of Items " << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "____________________________" << endl;
        cout << "Item No " << i + 1 << endl;
        cout << "----------------------------" << endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    system("pause");

    return 0;
}