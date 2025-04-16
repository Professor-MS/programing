// Passing structure by Address through pointer
#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
void ChangeLength(struct Rectangle *p, int l)
{
    p->length = l; // modification to length through pointer
}
int main()
{
    struct Rectangle r = {10, 5};
    ChangeLength(&r, 20);
    cout << r.length;
    return 0;
}