#include <iostream>
using namespace std;

int main()
{
    // 1. Current balance       2. Deposit         3. Withdraw        4. Transfer money     5. Exit
    system("cls");
    string userName = "salman";
    int password = 123;
    int option, currentBalance = 0, depositAmount = 0, withdrawAmount = 0, accountNumber = 12345, transferMoney;
    cout << "Enter username: ";
    cin >> userName;
    cout << "Enter passowrd: ";
    cin >> password;
    if (userName == "salman" && password == 123)
    {
        do
        {
            cout << "\n\tWelcome to ATM Machine\n";
            cout << "\n1. Current Balnce \n2. Deposit \n3. Withdraw \n4. Transfer money\n5. Exit\n";
            cout << "\nOption: ";
            cin >> option;
            system("cls");
            switch (option)
            {
            case 1:
                cout << "Your current balance is " << currentBalance << "$\n";
                break;
            case 2:
                cout << "Enter amount to Deposit : ";
                cin >> depositAmount;
                currentBalance += depositAmount;
                cout << "Deposit Successful \n";
                cout << "Your current balance is " << currentBalance << "$\n";
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> withdrawAmount;
                if (withdrawAmount > currentBalance)
                {
                    cout << "Insufficient Balance\n";
                    break;
                }
                currentBalance -= withdrawAmount;
                cout << "Withdraw successful\n";
                cout << "Your current balance is " << currentBalance << "$\n";
                break;
            case 4:
                cout << "Enter Account number: ";
                cin >> accountNumber;
                if (accountNumber != 12345)
                {
                    cout << "Account Number is Incorrect\n";
                    break;
                }
                cout << "Enter amount to Transfer: ";
                cin >> transferMoney;
                if (transferMoney > currentBalance)
                {
                    cout << "Insufficient Balance\n";
                    break;
                }

                cout << "Enter Password: ";
                cin >> password;
                if (password != 123)
                {
                    cout << "Transfer Faild\n";
                    break;
                }
                cout << "Transfer Successfull\n";
                currentBalance -= transferMoney;
                cout << "Your current balance is " << currentBalance << "$\n";
                break;
            }

        } while (option == 1 || option == 2 || option == 3 || option == 4);
        if (option == 5)
        {
            cout << "Thanks for using our Services\n";
        }
        else
            cout << "Invalid Selection\n";
    }
    else
        cout << "Wrong password or username\n";

    system("pause>0");
    return 0;
}