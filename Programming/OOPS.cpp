#include <iostream>
using namespace std;
using std::string;
class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};
class Employee : AbstractEmployee
{
protected:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    void setCompanyName(string company)
    {
        Company = company;
    }
    string getCompanyName()
    {
        return Company;
    }
    void setAge(int age)
    {
        Age = age;
    }
    int getAge()
    {
        return Age;
    }
    void IntroduceYourself()
    {
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion()
    {
        if (Age > 25)
        {
            cout << Name << " got Promoted!" << endl;
        }
        else
        {
            cout << Name << " Sorry! No Promotion for you." << endl;
        }
    }
};
class Developer : public Employee
{
public:
    string FavoriteProgrammingLanguage;
    Developer(string name, string company, int age, string favoriteProgrammingLanguage) : Employee(name, company, age)
    {
        FavoriteProgrammingLanguage = favoriteProgrammingLanguage;
    }
    void FixBug()
    {
        cout << Name << " Fixed Bug using " << FavoriteProgrammingLanguage << endl;
    }
};
class Teacher : public Employee
{
public:
    string Subject;
    Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
    {
        Subject = subject;
    }
    void TeachingLesson()
    {
        cout << Name << " is a Teacher of " << Subject << endl;
    }
};

int main()
{
    // Employee employee1 = {"Salman", "YT-ProfessorMS", 21};
    // employee1.IntroduceYourself();
    // employee1.AskForPromotion();
    Developer developer1 = Developer{"Salman", "YT-Porfessor", 21, "C++"};
    developer1.IntroduceYourself();
    developer1.AskForPromotion();
    developer1.FixBug();
    // Teacher Teacher1 = Teacher{"Sarwar", "UOM", 65, "Linear Algebra"};
    // Teacher1.IntroduceYourself();
    // Teacher1.AskForPromotion();
    // Teacher1.TeachingLesson();
    return 0;
}