#include <iostream>
using namespace std;

int main()
{
    // 1. Current balance       2. Deposit         3. Withdraw        4. Transfer money     5. Exit
    string userName = "salman";
    int password = 123, accountNumber = 12345;
    int currentBalnce = 0, depositAmount = 0, withdrawAmount = 0, transferAmount = 0;
    system("cls");
    cout << "******* Welcome to ATM *******\n";
    cout << "Enter Username: ";
    cin >> userName;
    cout << "Enter Password: ";
    cin >> password;
    int option;
    if (userName == "salman" && password == 123)
    {
        cout << "\n\tLog in Successfull\n";

        do
        {
            cout << "\n\t***********Main Manu***********\n";
            cout << "\n1. Current Balance\n2. Deposit\n3. Withdraw\n4. Transfer money\n5. Exit\n";
            cout << "Option: ";
            cin >> option;
            system("cls");
            switch (option)
            {
            case 1:
                cout << "\n\tYour current balance is " << currentBalnce << "$\n";
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> depositAmount;
                currentBalnce += depositAmount;
                cout << "\tYour current balance is  " << currentBalnce << "$\n";
                break;
            case 3:
                cout << "Enter Amount to withdraw: ";
                cin >> withdrawAmount;
                if (withdrawAmount > currentBalnce)
                {
                    cout << "\tInsufficient Balance\n";
                    break;
                }

                currentBalnce -= withdrawAmount;
                cout << "\tYour current balance is  " << currentBalnce << "$\n";
                break;

            case 4:
                cout << "Enter Account number: ";
                cin >> accountNumber;
                if (accountNumber != 12345)
                {
                    cout << "Transfer faild";
                    break;
                }
                cout << "Enter amount to transfer: ";
                cin >> transferAmount;
                cout << "Enter password: ";
                cin >> password;
                if (password == 123)
                {
                    if (transferAmount > currentBalnce)
                    {
                        cout << "\n\tInsufficient Balance\n";
                        break;
                    }

                    currentBalnce -= transferAmount;
                    cout << "\n\tTransfer Successfull\n";
                    cout << "\tYour current balance is  " << currentBalnce << "$\n";
                    break;
                }
                else
                    cout << "\tTransfer faild\n";
                break;
            }
        } while (option == 1 || option == 2 || option == 3 || option == 4);
        if (option == 5)
        {
            cout << "\nThanks for Using our Services\n";
        }
        else
            cout << "\tInvalid Selection\n";
    }
    else
    {
        cout << "Incorrect Username or Password.\nTry again.\n";
    }
    system("pause>0");
    return 0;
}