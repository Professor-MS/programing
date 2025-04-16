#include <iostream>
using namespace std;
class Hero
{
private:
    int Level;
    char Grade;

public:
    string heroName;
    string Gender = "Male";
    // Default Constructor
    Hero()
    {
        cout << "Object is Created while calling of Default Constructor" << endl;
    }
    // Destructor
    ~Hero()
    {
        cout << "Destructor Called" << endl;
        // delete [];
    }
    // Parameterized Constructor
    Hero(string Gender)
    {
        this->Gender = Gender;
    }
    void setGrade(char Grade)
    {
        this->Grade = Grade;
    }
    // void setGrade(char a)
    // {
    // Grade = a;}
    char getGrade()
    {
        return Grade;
    }
    void setLevel(int Level)
    {
        this->Level = Level;
    }
    int getLevel()
    {
        return Level;
    }
};
int main()
{
    cout<<"________________________________"<<endl;
    // statically object created
    Hero hero1;
    hero1.setGrade('A');
    hero1.setLevel(13);
    cout << "Level of the Hero " << hero1.getLevel() << endl;
    hero1.heroName = "Professor";
    cout << "Hero Name " << hero1.heroName << endl;
    cout << "Gender of Hero " << hero1.Gender << endl;
    cout << "Grade of the Hero " << hero1.getGrade() << endl;
    cout<<"________________________________"<<endl;
        // Dynamically object created
    Hero *b = new Hero;
    (*b).setLevel(21);
    cout << "Dynamically Object is Created with Level " << (*b).getLevel() << endl;
    cout << endl;
    system("pause");
    return 0;
}