#include <iostream>
using namespace std;
struct Card
{
    int face;
    int shape;
    int color;
};

int main()
{
    // Declaring Array of Structure. here is array of ten Structure (mean array of ten cards)
    struct Card Deck[10] = {{1, 0, 0}, {1, 2, 1}, {2, 2, 0}, {2, 3, 1}}; // Declaring values for each card(face,shape,color)
    // accessing of array cards
    cout << "Face: " << Deck[3].face << endl;
    cout << "Shape: " << Deck[3].shape << endl;
    cout << "Color: " << Deck[3].color << endl;

    return 0;
}