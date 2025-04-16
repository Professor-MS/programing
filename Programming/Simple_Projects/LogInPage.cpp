#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
void LogIn();
void Registration();
void Forgot();

int main()
{
    int choice;
    cout << "\t\t\t_________________________________________________________________\n\n\n";
    cout << "\t\t\t                    Welcome to the Log in Page                   \n\n\n";
    cout << "\t\t\t____________________________Menue________________________________\n\n";
    cout << "                                                                        \n\n";
    cout << "\t| Press 1 to Log In          |\n";
    cout << "\t| Press 2 to Register        |\n";
    cout << "\t| Press 3 Forgot Password?   |\n";
    cout << "\t| Press 4 to Exit            |\n";
    cout << "\n\t\t\t Please enter your Choice : ";
    cin >> choice;
    cout << endl;
    switch (choice)
    {
    case 1:
        LogIn();
        break;
    case 2:
        Registration();
        break;
    case 3:
        Forgot();
        break;
    case 4:
        cout << "\t\t\t Thank You!\n";
        break;

    default:
        system("cls");
        cout << "\t\tPlease Select from the given option.\n";
        main();
    }
    system("pause>0");
    return 0;
}
void LogIn()
{
    int count;
    string userId, Password, id, pass;
    system("cls");
    cout << "\t\t\t Please enter username and password: \n";
    cout << "\t\t\tUser Name ";
    cin >> userId;
    cout << "\t\t\tPassowrd";
    cin >> Password;
    ifstream input("records.txt");
    while (input >> id >> pass)
    {
        if (id == userId && pass == Password)
        {
            count = 1;
            system("cls");
        }
        input.close();
        if (count == 1)
        {
            cout << userId << " \n Your Log in is successfull \n Thanks for Log in";
        }
        else
        {
            cout << "\n Log In Error";
            main();
        }
    }
}
void Registration()
{
    string ruserId, rPassword, rId, rPass;
    system("cls");
    cout << "\t\t\t Enter Username : ";
    cin >> ruserId;
    cout << "\t\t\t Enter Password : ";
    cin >> rPassword;
    ofstream f1("records.txt", ios::app);
    f1 << ruserId << ' ' << rPassword << endl;
    system("cls");
    cout << "\t\t\t Registration is Successfull! \n";
    main();
}
void Forgot()
{
    int option;
    system("cls");
    cout << "\t\t\t You Forgot the Password?\n";
    cout << "Press 1 to search your ID by username \n";
    cout << "Press 2 to go back to main menu \n";
    cout << "Enter Your Choice : ";
    cin >> option;
    switch (option)
    {
    case 1:
    {
        int count = 0;
        string sUserId, sId, sPass;
        cout << "\n\t\t\tEnter old Username";
        cin >> sUserId;
        ifstream f2("records.txt");
        while (f2 >> sId >> sPass)
        {
            if (sId == sUserId)
            {
                count = 1;
            }
            f2.close();
            if (count == 1)
            {
                cout << "\n\nYour account is found\n";
                cout << "\n\nYour Password is : " << sPass;
                main();
            }
            else
            {
                cout << "\n\tSorry! Your account was not found";
                main();
            }
        }
        break;
    }
    case 2:
    {
        main();
    }

    default:
        cout << "Wrong Choice\n";
        Forgot();
        break;
    }
}