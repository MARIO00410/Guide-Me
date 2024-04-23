#ifndef PATH_H
#define PATH_H
#include<string>
using namespace std;

class Path
{
public:
    string destination;
    string transportation;
    int money;
public:
    Path(string destination,int money,string transportation);
};

#endif // PATH_H
