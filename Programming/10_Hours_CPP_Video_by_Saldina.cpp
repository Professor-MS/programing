#include <iostream>
#include <list>
#include <iomanip>
using namespace std;
/* float sum(float a, int b)
{
    return a + b;
}
float subtract(float a, int b)
{
    return a - b;
}
float divide(float a, int b)
{
    return a / b;
}
void introduceYourself(string name, string city, int age = 0)
{
    cout << "My name is " << name << endl;
    cout << "I am from " << city << endl;
    if (age != 0)
        cout << "I am " << age << " years old\n";
};
// function Overloading: Function with same name but different parameter
int sum(int a, int b)
{
    return a + b;
}
float sum(float a, float b)
{
    return a + b;
}
double sum(double a, double b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
float sum(float a, float b, float c)
{
    return a + b + c;
}
// Generic Function: Every type of value can pass to this single function Swap();
// template <typename T> //both is used for template
template <class Type>
void Swap(Type &a, Type &b)
{
    Type temp = a;
    a = b;
    b = temp;
}
int RecursiveSum(int m, int n)
{
    if (m == n)
    {
        return m;
    }
    return m + RecursiveSum(m + 1, n);
} */
int recursiveFactorial(int n)
{
    if (n == 0)
        return 1;
    return n * recursiveFactorial(n - 1);
}

class YouTubeChannel
{
private:
    string Name, ownerName;
    int subscriberCount;
    list<string> PublishedVideoTitle;

public:
    YouTubeChannel(string name, string OwnerName)
    {
        Name = name;
        ownerName = OwnerName;
        subscriberCount = 0;
    }
    void GetInfo()
    {
        cout << "Channel Name: " << Name << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Subscriber: " << subscriberCount << endl;
        cout << "Videos: " << endl;
        for (string videoTitle : PublishedVideoTitle)
        {
            cout << videoTitle << endl;
        }
    }
    void Subscribe()
    {
        subscriberCount++;
    }
    void UnSubscribe()
    {
        if (subscriberCount > 0)
        {
            subscriberCount--;
        }
    }
    void PublishedVideo(string title)
    {
        PublishedVideoTitle.push_back(title);
    }
};
int main()
{

    /*
    cout << "size of int is " << sizeof(int) << " bytes\n";
    cout << "\n______________________________________________________\n";
    cout << "size of float is " << sizeof(float) << " bytes\n";
    cout << "size of char is " << sizeof(char) << " bytes\n";
    cout << "size of double is " << sizeof(double) << " bytes\n";
    cout << "size of bool is " << sizeof(bool) << " bytes\n";
    cout << "size of Unsigned int is " << sizeof(unsigned int) << " bytes\n";
    cout << "\n______________________________________________________\n";

    cout << "int min value is " << INT32_MIN << "\n";
    cout << "int max value is " << INT32_MAX << "\n";
    cout << "UnsignedInt max value is " << UINT32_MAX << "\n";

    int intMax = INT32_MAX;
    cout << "INT_MAX + 1 =" << intMax + 1; // Value going negative

    cout << "\n______________________________________________________\n";
    cout << "ASCCI code for letter a " << (int)'a' << endl;
    cout << "ASCCI code for letter b " << (int)'b' << endl;
    cout << "ASCCI code for letter A " << (int)'A' << endl;
    cout << "ASCCI code for letter B " << (int)'B' << endl;
    cout << "ASCCI code convert to letter " << char(90) << endl;
    cout << "\n______________________________________________________\n";
    int Number;
    cout << "Enter a Number to Check wether it is Odd or Even: ";
    cin >> Number;
    if (Number % 2 == 0)
    {
        cout << Number << " is Even Number";
    }
    else
        cout << Number << " is Odd Number.";

    cout << "\n______________________________________________________\n";
    cout << "__|     Encoding System of 9 letters       |__\n";
    char c1, c2, c3, c4, c5, c6, c7, c8, c9;
    cout << "Enter Your message to encode: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5 >> c6 >> c7 >> c8 >> c9;
    cout << "Your ASCII message is: " << (int)c1 << " " << (int)c2 << " " << (int)c3 << " " << (int)c4 << " " << (int)c5 << " " << (int)c6 << " " << (int)c7 << " " << (int)c8 << " " << (int)c9 << endl;
    // PROFESSOR ASCII MESSAGE :80 82 79 70 69 83 83 79 82
    cout << "__|      Decoding System of 9 letters        |__\n";
    cout << "Enter your encoded message to decode: ";
    int a1, a2, a3, a4, a5, a6, a7, a8, a9;
    cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> a8 >> a9;
    cout << "Your message is decoded : " << char(a1) << " " << char(a2) << " " << char(a3) << " " << char(a4) << " " << char(a5) << " " << char(a6) << " " << char(a7) << " " << char(a8) << " " << char(a9) << endl;
    cout << "\n______________________________________________________\n";

    cout << "Enter three side of triangle to check whether it is Equilateral, Isoscelas, or Scalene Triangle\n";
    float side1, side2, side3;
    cout << "Enter three side: ";
    cin >> side1 >> side2 >> side3;
    if (side1 == side2 && side2 == side3)
    {
        cout << "Equilateral Triangle\n";
    }
    else
    {
        if (side1 != side2 && side1 != side3 && side2 != side3)
        {
            cout << "Scalene Triangle\n";
        }
        else
            cout << "Isoscelas Triangle\n";
    }
    cout << "\n______________________________________________________\n";

    cout << "__|        OPERATORS        |__\n";
    cout << "__________Arithmatic Operator(+,-,*,/,%)_________\n";

    cout << "Addition: " << 5 + 2 << endl;              // 7
    cout << "Subtraction: " << 5 - 2 << endl;           // 3
    cout << "Division Integer type: " << 5 / 2 << endl; // 2
    cout << "Division Float type: " << 5 / 2.0 << endl; // 2.5
    cout << "Reminder (modulus): " << 5 % 2 << endl;    // 1
    int count1 = 5;
    count1++;
    cout << "count post incriment: " << count1 << endl;
    int count2 = 10;
    count2--;
    cout << "count is post decriment: " << count2 << endl;
    int count3 = 10;
    cout << "count Pre incriment: " << ++count3 << endl;
    int count4 = 10;
    cout << "count Pre decriment: " << --count4 << endl;

    cout << "________Relational Operator(>,<,==,!=,<=,>=)________\n";
    int a = 5, b = 7;
    cout << "a= " << a << " and b= " << b << endl;
    cout << "If true(1) or false(0)\n";
    cout << "a > b : " << (a > b) << endl;
    cout << "a < b : " << (a < b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a == b : " << (a == b) << endl;

    cout << "________Logical Operator(||,&&,!)________\n";
    cout << "a= " << a << " and b= " << b << endl;
    cout << "If true(1) or false(0)\n";
    cout << "Condition 1. (a==5 && b==5) : " << (a == 5 && b == 5) << endl;    // for && operator if both true the result will be true otherwise false
    cout << "Condition 2. (a==5 ||  b==5) : " << (a == 5 || b == 5) << endl;   // for || operator if both false the result will be false otherwise true
    cout << "Condition 3. !(a==5 ||  b==5) : " << !(a == 5 || b == 5) << endl; // for ! operator if result is true it will show false or if false it will show true
    cout << "__________Precedence Priority of Operators_______\n";
    cout << "Aritmatic Operator > Relational operator > Logical operator\n";
    cout << "Arithmatic Operators has high Priority than Relational and Logical Operator.\n";
    cout << "a= " << a << " and b= " << b << endl;
    cout << "If true(1) or false(0)\n";
    cout << "Aritmatic Operator priority (a==5 && b==5+2) : " << (a == 5 && b == 5 + 2) << endl; // here b=5+2 which is equal to 7 first check arithmatic operation (+) then check Relational operation(==) whether b==7 or not and at last Logical Operation (&&) is checked.
    cout << "__________Assignment Operator(=,+=,-=,/=,%=,*=)\n";
    int z = 5; // = assignment
    z += 5;    // += assignemt work as like z=z+5; Ans:10
    cout << " += " << z << endl;
    int x = 10;
    x -= 3; // -= assignemt work as like x=x-3; Ans:7
    cout << " -= " << x << endl;
    int y = 3;
    y *= 5; // *= assignemt work as like y=y*5; Ans:15
    cout << " *= " << y << endl;
    int w = 13;
    w %= 2; // %= assignemt work as like w=w%2; Ans:1
    cout << " %= " << w << endl;
    cout << "\n______________________________________________________\n";

    cout << "_________Find Result Of the following________\n";
    cout << "What is going to be the result of the following lines?" << endl;
    int d = 5, e = 4;
    cout << "First Line : " << d + (e++) << endl;
    cout << "Second line: " << (--d) + e << endl;

    cout << "!(true && false) :" << !(true && false) << endl;
    cout << "(true && false || true) : " << (true && false || true) << endl;

    int f = 7;
    cout << "f= " << f << endl;
    cout << "(++f <= 9 && f + 2 >= 10) : " << (++f <= 9 && f + 2 >= 10) << endl;
    cout << "(++f <= 9 && 2 + f >= 10) : " << (++f <= 9 && 2 + f >= 10) << endl;

    int g = 3;
    cout << "(g == g++) : " << (g == g++) << endl;


    float h = 8;
    h += 2;
    cout << h << endl;
    h /= 2;
    cout << h << endl;
    cout << "\n______________________________________________________\n";

    cout << "________Swaping of Values______\n";

    cout << "=>>Method No 1.\n";
    int glass1 = 10, glass2 = 20, tempGlass; // taking temporary variable to store the value
    cout << "Before swaping Glass 1= " << glass1 << " and Glass 2= " << glass2 << endl;
    tempGlass = glass1;
    glass1 = glass2;
    glass2 = tempGlass;
    cout << "After swaping Glass 1= " << glass1 << " and Glass 2= " << glass2 << endl;

    cout << "=>>Method No 2.\n";
    int a = 5, b = 9;
    cout << "Before swaping a= " << a << " b= " << b << endl;
    swap(a, b); // predefind keyword which swap two values without temp variable
    cout << "After swaping a= " << a << " b= " << b << endl;

    cout << "=>>Method No 3.\n";
    int x = 10, y = 20;
    cout << "Before swaping x= " << x << " and y= " << y << endl;
    x = x + y; // 30
    y = x - y; // 10
    x = x - y; // 20
    cout << "After swaping x= " << x << " y= " << y << endl;
    cout << "\n______________________________________________________\n";

    cout << "________Welcome to BMI Calculator_________\n";
    float weight, height;
    cout << "Enter your weight(kg) : ";
    cin >> weight;
    cout << "\nEnter your height(m) : ";
    cin >> height;
    float BMI = weight / (height * height);
    if (BMI < 18)
    {
        cout << "Underweight\n";
    }
    else
    {
        if (BMI > 25)
            cout << "Over Weight\n";
        else
            cout << "normal Weight\n";
    }
    cout << "Your BMI is: " << BMI << endl;
    cout << "\n______________________________________________________\n";

    system("cls");
    cout << "______Welcome to Guessing Number and finding that Number game______\n";
    int hostUserNumber, guestUserNumber;
    cout << "Host: ";
    cin >> hostUserNumber;
    system("cls");
    cout << "Guest: ";
    cin >> guestUserNumber;
    //(hostUserNumber == guestUserNumber) ? cout << "Correct! Good Job\n" : cout << "Failed! Try another one\n"; //Ternary operator, This single line work as like if-else statement work.
    if (hostUserNumber == guestUserNumber)
        cout << "Correct! Good Job\n";
    else
        cout << "Failed! Try another one\n";

    cout << "\n______________________________________________________\n";

    cout << "\t\tWelcome to Professor Calculator\n";
    float number1, number2;
    char Operation;
    cin >> number1 >> Operation >> number2;
    switch (Operation)
    {
    case '-':
        cout << number1 << Operation << number2 << " = " << number1 - number2 << endl;
        break;
    case '+':
        cout << number1 << Operation << number2 << " = " << number1 + number2 << endl;
        break;
    case '*':
        cout << number1 << Operation << number2 << " = " << number1 * number2 << endl;
        break;
    case '/':
        cout << number1 << Operation << number2 << " = " << number1 / number2 << endl;
        break;
    case '%':
        bool num1Int, num2Int;
        num1Int = ((int)number1 == number1);
        num2Int = ((int)number2 == number2);
        if (num1Int && num2Int)
        {
            cout << number1 << Operation << number2 << " = " << (int)number1 % (int)number2 << endl;
        }
        else
            cout << "Not Valid!\n";

        break;

    default:
        cout << "Invalid Operation!\n";
        break;
    }
    cout << "\n______________________________________________________\n";
    cout << "Choose year and month to know days in the month\n";

    int year, month;
    cout << "Enter Year & month ";
    cin >> year >> month;
    switch (month)
    {
    case 2:
        (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? cout << "29 days month\n" : cout << "28 days month\n";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30 days month\n";
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31 days month\n";
        break;
    default:
        cout << "Invalid Input.\n";
        break;
    }

    cout << "\n______________________________________________________\n";

    cout << "Write out all the numbers between 100-500 that are divisible by 3 & 5\n";
    int i = 100;
    while (i <= 500)
    {
        if (i % 3 == 0 && i % 5 == 0)
            cout << i << " ";
        i++;
    }

    cout << "\n______________________________________________________\n";
    int number;
    cout << "Enter a number to count digit in that number.\n";
    cout << "Number : ";
    cin >> number;
    if (number == 0)
    {
        cout << "You have enterd 0.\n";
    }
    else
    {
        if (number < 0)
            number = -1 * number; // Taking absolute of a number if the number is negative, mean less than zero.

        int counter = 0;
        while (number > 0)
        {

            // number = number / 10;
            number /= 10; // when the number is divided by 10 the decimal part will not be entertained again because we take number INT datatype.
            counter++;
        }
        cout << "Number contain " << counter << " digits.\n";
    }

    int num;
    cout << "\n______________________________________________________\n";
    cout << "This Program will reverse a number.\n";
    cout << "Number: ";
    cin >> num;
    if (num == 0)
    {
        cout << "you have enterd 0.\n";
    }
    else
    {
        int reversedNumber = 0;
        while (num != 0)
        {
            reversedNumber = reversedNumber * 10;
            int lastDigit = num % 10;
            reversedNumber = reversedNumber + lastDigit;
            num = num / 10;
        }
        cout << "Reversed: " << reversedNumber << endl;
    }

    cout << "\t\tEnter Your PIN to Log In to Your Account\n";
    int UserPin = 1234, Pin, errorCounter = 0;
    do
    {

        cout << "Enter PIN: ";
        cin >> Pin;
        if (Pin != UserPin)
            errorCounter++;

    } while (errorCounter < 3 && Pin != UserPin);
    if (errorCounter < 3)
    {
        cout << "Log In Succesfull.\n";
    }
    else
        cout << "Too many Attempts.\nUser Blocked...\n";

    cout << "\n______________________________________________________\n";
    int aNumber, factorial = 1;
    cout << "Find Factorial of a Number.\n Number: ";
    cin >> aNumber;
    if (aNumber < 0)
    {
        cout << "Number must be greater than 0\n";
    }
    else
    {

        for (int i = aNumber; i > 0; i--)
        {
            factorial = factorial * i;
        }
        cout << aNumber << "! = " << factorial << endl;
    }
    cout << "\n______________________________________________________\n";

    int totalPaper, SumOfMarks = 0, marks;
    cout << "Calculate Avg and Sum of Total Papers.\nEnter Number of Papers: ";
    cin >> totalPaper;
    for (int i = 0; i < totalPaper; i++)
    {
        do
        {
            cout << "Enter marks of " << i + 1 << " paper : ";
            cin >> marks;
        } while (marks < 0 && marks > 100);
        SumOfMarks = SumOfMarks + marks;
    }
    cout << "Total marks : " << SumOfMarks << endl;
    float Average = (float)SumOfMarks / totalPaper;
    cout << "Average marks: " << Average;

    cout << "\n______________________________________________________\n";
    system("cls");
    string color, celebrity, place;
    cout << "Enter a color: ";
    getline(cin, color);
    cout << "Your favourite Acter : ";
    getline(cin, celebrity);
    cout << "Your favourite place : ";
    getline(cin, place);
    cout << "Roses are " << color << endl;
    cout << "My Favourite acter is " << celebrity << endl;
    cout << "I love to go to " << place << endl;


    cout << "\n______________________________________________________\n";
    cout << "Multiplication from 1 to 10 with each number upto 10.\n";
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
    }

    system("cls");
    cout << "\n______________________________________________________\n";
    int width, height;
    char character;
    cout << "Width: ";
    cin >> width;
    cout << "height: ";
    cin >> height;
    cout << "Enter Character/symbol that you want to display: ";
    cin >> character;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << setw(3) << character; // To use setw() function we should need to include <iomanip> library.
        }
        cout << endl;
    }

    cout << "\n______________________________________________________\n";

    int heightOfTriangle;
    char symbol;
    cout << "Enter height of triangle: ";
    cin >> heightOfTriangle;
    cout << "Enter symbol: ";
    cin >> symbol;
    for (int i = 1; i <= heightOfTriangle; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << symbol << " ";
        }
        cout << endl;
    }
    cout << "\n____Inverted Triangle____\n\n";
    for (int i = heightOfTriangle; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << symbol << " ";
        }
        cout << endl;
    }

    system("cls");
    cout << "\n______________________________________________________\n";
    cout << "\n____Function Call with return type______\n";
    float num1, num2;
    cout << "Enter two number: ";
    cin >> num1 >> num2;
    cout << "\n\tChoose Operation\n1. Add them\n2. Subtract them\n3. Divide them\n";
    int option;
    cin >> option;
    switch (option)
    {
    case 1:
        cout << " Addition of these number is " << sum(num1, num2);
        break;
    case 2:
        cout << " Subtraction of these number is " << subtract(num1, num2);
        break;
    case 3:
        cout << " Division of these number is " << divide(num1, num2);
        break;

    default:
        cout << "Invalid Selection\n";
        break;
    }
    cout << "\n______________________________________________________\n";
    cout << "\n____Function call with Parameter_____\n";
    introduceYourself("Professor", "Peshawar", 21);
    introduceYourself("Hamza", "Charssadda"); // here age is missing for 2nd user so we put a condition for it in the function, that not to show any thing related to age if age is not pass.
    string name, city;
    int age;
    cout << "Name: ";
    cin >> name;
    cout << "City: ";
    cin >> city;
    cout << "Age: ";
    cin >> age;
    introduceYourself(name, city, age);

    system("cls");
    cout << "\n______________________________________________________\n";
    int number;
    cout << "Enter Number: ";
    cin >> number;
    bool isPrime = true;
    for (int i = 2; i < (number / 2); i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime) // isPrime=true
        cout << number << " is Prime number \n";
    else
        cout << number << " is not Prime number \n";

    cout << "\n______________________________________________________\n";
    cout << "____________Function Overloading__________\n";
    cout << "double Function call Sum is " << sum(2.2, 3.3) << endl;
    cout << "int Function call Sum is " << sum(23, 33) << endl;
    cout << "Three parameter float Function call Sum is " << sum(23, 3.3, 3.4) << endl;
    system("cls");
    cout << "\n______________________________________________________\n";
    cout << "\n\t____Welcome to ATM Machine____\n";
    string Username, userName = "salman";
    int password = 123;
    int currentBalance = 0, DepositMoney = 0, balanceWithdraw = 0;
    int option;

    cout << "Enter Username: ";
    cin >> Username;
    cout << "Enter Password: ";
    cin >> password;
    if (Username == userName && password == 123)
    {
        cout << "\tLog In Succesfull !\n";
        do
        {
            cout << "********MENU********\n";
            cout << "1. Check Balance\n2. Deposit money\n3. Withdraw.\n4. Exit\n";
            cout << "***********************\n";
            cout << "Option: ";
            cin >> option;
            system("cls");
            switch (option)
            {
            case 1:
                cout << "Your current balance is " << currentBalance << "$." << endl;
                break;
            case 2:
                cout << "Enter amount to Deposit: ";
                cin >> DepositMoney;
                currentBalance += DepositMoney;
                cout << "Now Your current balance is " << currentBalance << "$." << endl;
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> balanceWithdraw;
                if (balanceWithdraw > currentBalance)
                {
                    cout << "Insufficient Balance\n";
                }
                else
                {
                    currentBalance -= balanceWithdraw;
                    cout << "Withdraw Successfull\n";
                    cout << "Now your current balance is " << currentBalance << "$." << endl;
                }
                break;
            }
        } while (option == 1 || option == 2 || option == 3);
        if (option == 4)
        {
            cout << "Exit Successfull.\nThanks for Using Our ATM\n";
        }
        else
            cout << "Invalid Selection\n";
    }
    else
    {
        cout << "Incorrect Username or Password. Try Again\n";
    }

    cout << "\n______________________________________________________\n";
    cout<<"Swaping of two Numbers.\n";
    char a = 'a', b = 'b';
    int c = 5, d = 10;
    cout << a << " - " << b << endl;
    Swap(a, b);
    cout << a << " - " << b << endl;
    cout << c << " - " << d << endl;
    Swap(c, d);
    cout << c << " - " << d << endl;

    cout << "\n______________________________________________________\n";
    cout << "Finding sum between two numbers\n";
    int m = 2, n = 5;
    int sum = 0;
    for (int i = m; i <= n; i++) // sum between m-n
    {
        sum += i;
    }
    cout << "Loop Sum is : " << sum << endl;
    cout << "Recursive SUM is : " << RecursiveSum(m, n) << endl;
    cout << "\n______________________________________________________\n";
    cout<<"___Finding Factorial of a number.____\n";
    int n = 4;
    cout << "factorial is : " << recursiveFactorial(n);
    */

    cout << "\n______________________________________________________\n";
    cout << "*****************OOPS Started*****************\n";
    YouTubeChannel ytchannel1("MS-Professor", "Salman");
    ytchannel1.PublishedVideo("C++ for Beginners");
    ytchannel1.PublishedVideo("Python for Beginners to Advance");
    ytchannel1.PublishedVideo("Complete HTML & CSS for Beginners ");
    ytchannel1.Subscribe();
    ytchannel1.Subscribe();
    ytchannel1.Subscribe();
    ytchannel1.UnSubscribe();
    ytchannel1.GetInfo();
    // system("cls"); Clear Screen or terminal
    // cout << "\nWatch Video from :08:09:00\n";
    system("pause>0");

    return 0;
}
