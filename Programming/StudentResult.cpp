#include <iostream>
using namespace std;
// In this Example we are discused about Virtual Class
class Student
{
protected:
    int RollNo;

public:
    void SetNumber(int a)
    {
        RollNo = a;
    }
    void PrintNumber(void)
    {
        cout << "Your Roll No is " << RollNo << endl;
    }
};
class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void setMarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void PrintMarks()
    {
        cout << "Your Marks is Here: " << endl
             << "Maths: " << maths << endl
             << "physics: " << physics << endl;
    }
};
class Sport : virtual public Student
{
protected:
    float score;

public:
    void SetScore(float sc)
    {
        score = sc;
    }
    void printScore()
    {
        cout << "Sport Score: " << score << endl;
    }
};
class Result : public Test, public Sport
{
protected:
    double TotalMarks;

public:
    void printResult(void)
    {
        TotalMarks = maths + physics + score;
        PrintNumber();
        PrintMarks();
        printScore();
        cout << "Your total Marks is " << TotalMarks << endl;
    }
};

int main()
{
    Result Std1;
    Std1.SetNumber(15075);
    Std1.setMarks(92, 89);
    Std1.SetScore(8);
    Std1.printResult();

    return 0;
}