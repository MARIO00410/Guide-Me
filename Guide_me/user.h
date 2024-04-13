#ifndef USER_H
#define USER_H
#include <string>

using namespace std;

class user
{
private:


public:
    string FirstName,LastName;
    string UserName;
    string Password;
    int Age;
    string Gender;
    string Country;
    user(string FirstName,string LastName,string UserName ,string Password, int Age, string Gender, string Country);
};

#endif // USER_H
