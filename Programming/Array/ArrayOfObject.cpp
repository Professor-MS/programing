#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    string Gender;
    int age;
    virtual void Study() = 0;
};
class ProgrammingStudent : public Student
{
    void Study()
    {
        cout << "Programming Student: I am Programming Student\n";
    }
};
class ArtStudent : public Student
{
    void Study()
    {
        cout << "Arts Student: I am Learning Arts and How to Paint\n";
    }
};

class MusicStudent : public Student
{
    void Study()
    {
        cout << "Music Student: I am Singing and Learn How to Play Instrument\n";
    }
};
int main()
{
    Student *students[3];
    students[0] = new ProgrammingStudent();
    students[1] = new ArtStudent();
    students[2] = new MusicStudent();
    for (int i = 0; i < 3; i++)
    {
        students[i]->Study();
    }
    // DeAllocating Memory through for loop
    for (int i = 0; i <= 2; i++)
    {
        delete students[i];
    }

    return 0;
}