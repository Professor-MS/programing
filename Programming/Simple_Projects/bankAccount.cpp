#include <iostream>
using namespace std;
class bankAccount
{
private:
    long accountNo;
    string accountTitle;
    long accountBalance;

public:
    void deposit(long amount)
    {
        accountBalance += amount;
        cout << "You have Deposit " << accountBalance << endl;
    }
    void withDraw(long amount)
    {
        if (amount < 0)
        {
            cout << "Invalid input." << endl;
        }
        else if (amount > accountBalance)
        {
            cout << "Insufficient Balance." << endl;
        }
        else
        {
            cout << "Your Current Balance is " << accountBalance << endl;
        }
    }
};

int main()
{
    bankAccount a1;
    a1.deposit(1000);
    a1.withDraw(50);

    system("pause");
    return 0;
}