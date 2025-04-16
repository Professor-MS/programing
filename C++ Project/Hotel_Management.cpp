#include <iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
    // Quantity of items
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles, Qshake = 0, Qchicken = 0;
    // Quantity of items Sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles, Sshake = 0, Schicken = 0;
    // Quantity of items total
    int TotalRooms = 0, TotalPasta = 0, TotalBurger = 0, TotalNoodles = 0, TotalShake = 0, TotalChicekn = 0;
    cout << "\n\t Quantity of items we have ";
    cout << "\n Rooms available: ";
    cin >> Qrooms;
    cout << "\n Quantity of pasta ";
    cin >> Qpasta;
    cout << "\n Quantity of Burger ";
    cin >> Qburger;
    cout << "\n Quantity of Noodles ";
    cin >> Qnoodles;
    cout << "\nQuantity of Shake ";
    cin >> Qshake;
    cout << "\n Quantity of Chicken-roll ";
    cin >> Qchicken;
    cout << "\n\t\t\t Please select from the given menue option";
    cout << "\n\n1 Rooms ";
    cout << "\n2 Pasta ";
    cout << "\n3 Burger ";
    cout << "\n4 Noodles ";
    cout << "\n5 Shake ";
    cout << "\n6 Chicken-roll ";

    cout << "\n7 Informaton regarding sales and collection ";
    cout << "\n8 Exit";
m:
    cout << "\n\n Please Enter your Choice! ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "\n\n Enter the number of room you want: ";
        cin >> quant;
        if (Qrooms - Srooms >= quant)
        {
            Srooms = Srooms + quant;
            TotalRooms = TotalRooms + (quant * 1200);
            cout << "\n\n\t\t" << quant << " rooms have been alloted to you!";
        }
        else
        {
            cout << "\n\t Only " << Qrooms - Srooms << " Rooms remaining in hotel ";
        }
        break;
    case 2:
        cout << "\n\n Enter Pasta Quantity: ";
        cin >> quant;
        if (Qpasta - Spasta >= quant)
        {
            Spasta = Spasta + quant;
            TotalPasta = TotalPasta + (quant * 250);
            cout << "\n\n\t\t" << quant << " Pasta is the Order";
        }
        else
        {
            cout << "\n\t Only " << Qpasta - Spasta << " Pasta remaining in hotel ";
        }
        break;
    case 3:
        cout << "\n\n Enter Burger Quantity: ";
        cin >> quant;
        if (Qburger - Sburger >= quant)
        {
            Sburger = Sburger + quant;
            TotalBurger = TotalBurger + (quant * 120);
            cout << "\n\n\t\t" << quant << " Burger is the Order";
        }
        else
        {
            cout << "\n\t Only " << Qburger - Sburger << " Burger remaining in hotel ";
        }
        break;
    case 4:
        cout << "\n\n Enter Noodles Quantity: ";
        cin >> quant;
        if (Qnoodles - Snoodles >= quant)
        {
            Snoodles = Snoodles + quant;
            TotalNoodles = TotalNoodles + (quant * 140);
            cout << "\n\n\t\t" << quant << " Noodles is the Order";
        }
        else
        {
            cout << "\n\t Only " << Qnoodles - Snoodles << " Noodles remaining in hotel ";
        }
        break;
    case 5:
        cout << "\n\n Enter Shake Quantity: ";
        cin >> quant;
        if (Qshake - Sshake >= quant)
        {
            Sshake = Sshake + quant;
            TotalShake = TotalShake + (quant * 120);
            cout << "\n\n\t\t" << quant << " Shake is the Order";
        }
        else
        {
            cout << "\n\t Only " << Qshake - Sshake << " Shake remaining in hotel ";
        }
        break;
    case 6:
        cout << "\n\n Enter Chicken-roll Quantity: ";
        cin >> quant;
        if (Qchicken - Schicken >= quant)
        {
            Schicken = Schicken + quant;
            TotalChicekn = TotalChicekn + (quant * 150);
            cout << "\n\n\t\t" << quant << " Chicken-roll is the Order";
        }
        else
        {
            cout << "\n\t Only " << Qchicken - Schicken << " Chicken-roll remaining in hotel ";
        }
        break;
    case 7:
        cout << "\n\t\tDetails of Sales and Collection";
        cout << "\n\n Number of rooms we had: " << Qrooms;
        cout << "\n\n Number of rooms we gave for rent: " << Srooms;
        cout << "\n\n Remaining rooms " << Qrooms - Srooms;
        cout << "\n\n Total Rooms cllection for the day  " << TotalRooms;

        cout << "\n\n Number of Pasta we had: " << Qpasta;
        cout << "\n\n Number of Pasta we sold: " << Spasta;
        cout << "\n\n Remaining Pasta " << Qpasta - Spasta;
        cout << "\n\n Total Pasta collection for the day  " << TotalPasta;

        cout << "\n\n Number of Burger we had: " << Qburger;
        cout << "\n\n Number of Burger we gave for rent: " << Sburger;
        cout << "\n\n Remaining Burger " << Qburger - Sburger;
        cout << "\n\n Total Burger collection for the day  " << TotalBurger;

        cout << "\n\n Number of Noodles we had: " << Qnoodles;
        cout << "\n\n Number of Noodles we gave for rent: " << Snoodles;
        cout << "\n\n Remaining Noodles " << Qnoodles - Snoodles;
        cout << "\n\n Total Noodles collection for the day  " << TotalNoodles;

        cout << "\n\n Number of Shake we had: " << Qshake;
        cout << "\n\n Number of Shake we gave for rent: " << Sshake;
        cout << "\n\n Remaining Shake " << Qshake - Sshake;
        cout << "\n\n Total Shake collection for the day  " << TotalShake;

        cout << "\n\n Number of Chicken-roll we had: " << Qchicken;
        cout << "\n\n Number of Chicken-roll we gave for rent: " << Schicken;
        cout << "\n\n Remaining Chicken-roll " << Qchicken - Schicken;
        cout << "\n\n Total Chicken-roll collection for the day  " << TotalChicekn;

        cout << "\n\n\n Total Collection for the day: " << TotalRooms + TotalPasta + TotalBurger + TotalNoodles + TotalShake + TotalChicekn;
        break;
    case 8:
        exit(0);
    default:
        cout << "Please Select from the mentioned menue Above.";
    }
    goto m;
    system("pause");
    return 0;
}