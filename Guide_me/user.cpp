#include "user.h"
#include <string>

user::user(string FirstName,string LastName,string UserName ,string Password, int Age, string Gender, string Country) {
    this->FirstName=FirstName;
    this->LastName=LastName;
    this->UserName=UserName;
    this->Password=Password;
    this->Age=Age;
    this->Gender=Gender;
    this->Country=Country;
}
