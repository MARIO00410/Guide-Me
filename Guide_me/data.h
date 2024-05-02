#ifndef DATA_H
#define DATA_H

#include <user.h>
#include <vector>

class Data
{
public:
    static int currentUser;
    static vector<user>users;
    Data();
    static void ReadFile();
    static bool writeFile();

};
#endif // DATA_H
