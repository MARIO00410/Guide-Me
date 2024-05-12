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
    int id;
public:
    Path(string destination,int money,string transportation);
    Path(string destination,int money,string transportation,int id);
};

#endif // PATH_H
