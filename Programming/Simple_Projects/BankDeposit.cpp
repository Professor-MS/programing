#include <iostream>
using namespace std;
class BankDeposit
{
private:
    int years;
    int Principle;
    float intrestRate;
    float returnValue;

public:
    BankDeposit(){};
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);

    void show();
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    Principle = p;
    years = y;
    intrestRate = r;
    returnValue = Principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + r);
    }
}
BankDeposit::BankDeposit(int p, int y, int r)
{
    Principle = p;
    years = y;
    intrestRate = float(r) / 100;
    returnValue = Principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}

void BankDeposit::show()
{
    cout << " Your Principle amount was " << Principle
         << ". Return Value after " << years
         << " years is " << returnValue << endl;
};

int main()
{
    BankDeposit BankD1, BankD2;
    int p, y;
    float r;
    int R;
    cout << "Enter the value of Principle Years and Interest Rate " << endl;
    cin >> p >> y >> r;
    BankD1 = BankDeposit(p, y, r);
    BankD1.show();
    cout << "Enter the value of Principle Years and Interest Rate " << endl;
    cin >> p >> y >> R;
    BankD1 = BankDeposit(p, y, R);
    BankD1.show();

    system("pause");
    return 0;
}