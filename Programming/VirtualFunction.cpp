#include <iostream>
using namespace std;
       //Abstract Class: That class in which have at least one pure virtual function.
class Instrument
{
public:
    // This is Virtual Function, When there is another function in the derived class of the same name then the recent derived class function will be executed. Keyword: (Virtual)
    //virtual void MakeSound()=0;   //==> Pure Virtual Function
    virtual void MakeSound()
    {
        cout << "instrument is playing...\n";
    }

    // PURE VIRTUAL FUNCTION
    //  virtual void MakeSound()=0;
};
class Guitar : public Instrument
{
public:
    // here in this derived class, there is no derived function of the virtual function so it will not executed
};
class Piano : public Instrument
{
public:
    void MakeSound()
    {
        cout << "Piano is playing...\n";
    }
};
int main()
{

    Instrument *i1 = new Piano();
    // i1->MakeSound();
    Instrument *i2 = new Guitar();
    // i2->MakeSound();
    /*
    //This array is used to play sound of all instrument at once.
    Instrument* instruments[2]={i1,i2};
    for (int i=0;i<2;i++)
    instruments[i]->MakeSound(); */
    system("pause");
    return 0;
}