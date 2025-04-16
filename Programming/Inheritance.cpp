// Inheritance allows a new class to inherit attributes and behaviors from an existing class.
#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    string Name;
    int age;
    string Department;
    void DisplayInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "Age: " << age << endl;
        cout << "Department: " << Department << endl;
    }
};
class Teacher : public Employee
{
public:
    string subject;
    int Experience;
    void displayTeacherInfo()
    {
        cout << "_________Teacher___________" << endl;
        DisplayInfo();
        cout << "Subject: " << subject << endl;
        cout << "Years of Experience: " << Experience << endl;
    }
};
class Doctor : public Employee
{
public:
    string Specialization;
    int patientSeen;
    void displayDoctorInfo()
    {
        cout << "_________Doctor___________" << endl;
        DisplayInfo();
        cout << "Specialization : " << Specialization << endl;
        cout << "Patient Seen : " << patientSeen << endl;
    }
};

int main()
{
    Teacher teacher1; //("Ahmad", 27, "Computer Science","Programming",4);
    teacher1.Name = "Ahmad";
    teacher1.age = 27;
    teacher1.Department = "Computer Science";
    teacher1.subject = "Programming";
    teacher1.Experience = 4;
    teacher1.displayTeacherInfo();

    Doctor doctor1; //("Ali",28,"Cardiology","Kidney Specialist", 500);
    doctor1.Name = "Ali";
    doctor1.age = 35;
    doctor1.Department = "Cardiology";
    doctor1.patientSeen = 500;
    doctor1.Specialization = "Heart";
    doctor1.displayDoctorInfo();
    system("pause");
    return 0;
}