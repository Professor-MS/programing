#include <iostream>
using namespace std;
string classifyingWeight(double weight)
{
    if (weight < 5.0)
    {
        return "light";
    }
    else if (weight >= 5.0 && weight <= 15.0)
    {
        return "medium";
    }
    else
    {
        return "heavy";
    }
}
void ProcessConveyorBelt()
{
    double weight;
    char proceed = 'Y';
    while (proceed == 'y' || proceed == 'Y')
    {
        cout << "Reading the weight of object (in kg): ";
        cin >> weight;
        string category = classifyingWeight(weight);
        cout << "Object Classified as : " << category << endl;
        cout << "Do you want to classify another Object? (Y/N) ";
        cin >> proceed;
    }
    cout << "Conveyor Belt system Stoped " << endl;
}

int main()
{
    cout << "Welcome " << endl;
    ProcessConveyorBelt();
    return 0;
}