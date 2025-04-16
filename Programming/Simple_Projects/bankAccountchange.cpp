#include <iostream>
using namespace std;

class bankAccount
{
private:
    long accountNo;
    string accountTitle;
    long accountBalance;

public:
    // Constructor to initialize account details
    bankAccount(long accNo, string accTitle, long accBalance)
    {
        accountNo = accNo;
        accountTitle = accTitle;
        accountBalance = accBalance;
    }

    void deposit(long amount)
    {
        accountBalance += amount;
        cout << "You have deposited " << amount << ". Current balance is " << accountBalance << endl;
    }

    void withDraw(long amount)
    {
        if (amount < 0)
        {
            cout << "Invalid input." << endl;
        }
        else if (amount > accountBalance)
        {
            cout << "Insufficient balance." << endl;
        }
        else
        {
            accountBalance -= amount;
            cout << "You have withdrawn " << amount << ". Current balance is " << accountBalance << endl;
        }
    }
};

int main()
{
    // Create a bank account object with initial balance
    bankAccount a1(123456789, "John", 0);

    a1.deposit(0);
    a1.withDraw(0);  // Invalid input
    a1.withDraw(0);  // Successful withdrawal
    a1.withDraw(0); // Insufficient balance
    system("pause");
    return 0;
}
