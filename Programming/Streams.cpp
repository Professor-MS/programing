#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    char data[100];
    // open file in write mode
    ofstream outfile;
    outfile.open("file.txt");
    // writing to the file
    cout << "Enter your Name: ";
    cin.getline(data, 100);
    outfile << data << endl;
    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();
    outfile << data << endl;
    outfile.close();
    ifstream afile;
    afile.open("file.txt");
    afile >> data;
    cout << data << endl;
    afile >> data;
    cout << data << endl;
    afile.close();
    system("pause");

    return 0;
}