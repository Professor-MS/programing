#include <iostream>
#include <list>
using namespace std;
class User
{
public:
    virtual void getPermission()
    {
        cout << "User have limited Access to Info." << endl;
    }
};

class SuperUser : public User
{
    void getPermission()
    {
        cout << "SuperUser have All Access to Info." << endl;
    }
};

int main()
{
    User u;
    SuperUser s;
    list<User *> users;
    users.push_back(&u);
    users.push_back(&s);
    for (User *usrptr : users)
        usrptr->getPermission();

    return 0;
}