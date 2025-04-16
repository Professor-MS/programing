#include <iostream>
using namespace std;

int main()
{

   /* cout << int('A') << endl;
   cout << int('A') << endl;
   cout << int('a') << endl;
   cout << (int)'a' << endl;
   cout << char(65) << endl;
   cout << (char)65 << endl;
   cout << char(66) << endl;
*/
   cout << "\nThis Program will Convert ASCCI Letter to ASCCI number and vice versa\n";

   char c1, c2, c3, c4, c5, c6, c7, c8, c9;
   cout << "Enter Letters: " << endl;
   cin >> c1 >> c2 >> c3 >> c4 >> c5 >> c6 >> c7 >> c8 >> c9;
   cout << "ASCII Code for entered Letters: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) << " " << int(c6) << " " << int(c7) << " " << int(c8) << " " << int(c9) << endl;

   cout << "\n___________________________\n";
   cout << char(80) << char(82) << char(79) << char(70) << char(69) << char(83) << char(83) << char(79) << char(82) << endl; // 80 82 79 70 69 83 83 79 82
}