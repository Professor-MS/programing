#include <iostream>
using namespace std;
void showMenu()
{
    cout << "********MENU********\n";
    cout << "1. Check Balance\n2. Deposit money\n3. Withdraw.\n4. Transfer money\n5. Exit\n";
    cout << "***********************\n";
}
int main()
{
    system("cls");
    cout << "\n\t____Welcome to ATM Machine____\n";
    string Username, userName = "salman";
    int password = 123;
    int currentBalance = 0, DepositMoney = 0, balanceWithdraw = 0;
    int option, transferAmount, accountNumber = 123456;

    cout << "Enter Username: ";
    cin >> Username;
    cout << "Enter Password: ";
    cin >> password;
    if (Username == userName && password == 123)
    {
        cout << "\tLog In Succesfull !\n";
        do
        {
            showMenu();
            cout << "Option: ";
            cin >> option;
            system("cls");
            switch (option)
            {
            case 1:
                cout << "\tYour current balance is " << currentBalance << "$." << endl;
                break;
            case 2:
                cout << "Enter amount to Deposit: ";
                cin >> DepositMoney;
                currentBalance += DepositMoney;
                cout << "\tNow Your current balance is " << currentBalance << "$." << endl;
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> balanceWithdraw;
                if (balanceWithdraw > currentBalance)
                {
                    cout << "\tInsufficient Balance\n";
                }
                else
                {
                    currentBalance -= balanceWithdraw;
                    cout << "\tWithdraw Successfull\n";
                    cout << "\tNow your current balance is " << currentBalance << "$." << endl;
                }
                break;
            case 4:
                cout << "Enter account number: ";
                cin >> accountNumber;
                if (accountNumber != 12345)
                {
                    cout << "\tIncorrect Number\n";
                    break;
                }
                cout << "Enter amount: ";
                cin >> transferAmount;
                cout << "Enter Password: ";
                cin >> password;
                if (password == 123)
                {
                    currentBalance -= transferAmount;
                    cout << "\tTransfer Successful\n";
                    cout << "\tNow your current balance is " << currentBalance << "$." << endl;
                }
                else
                    cout << "\tWrong Password. Transfer Faild\n";
            }
        } while (option == 1 || option == 2 || option == 3 || option == 4);
        if (option == 5)
        {
            cout << "\tExit Successfull.\n\tThanks for Using Our ATM\n";
        }
        else
            cout << "\tInvalid Selection\n";
    }
    else
    {
        cout << "\tIncorrect Username or Password. Try Again\n";
    }
    system("pasue>0");
    return 0;
}