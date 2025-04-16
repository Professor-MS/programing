#include <iostream>
using namespace std;

int main()
{
    system("cls");
    cout << "________Welcome to BMI Calculator_________\n";
    string name;
    cout << "Enter your name : ";
    cin >> name;
    float weight, height;
    cout << "Enter your weight(kg) : ";
    cin >> weight;
    cout << "\nEnter your height(m) : ";
    cin >> height;
    float BMI = weight / (height * height);
    if (BMI < 18)
    {
        cout << name << " you are Underweight.\n";
    }
    else
    {
        if (BMI > 25)
            cout << name << "You are Over Weight.You need to lose your weight.\n";
        else
            cout << "Normal Weight! Congratulation. Dear " << name << endl;
    }
    cout << "Your BMI is: " << BMI << endl;
    system("pause>0");
    return 0;
}