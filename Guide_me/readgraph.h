#ifndef READGRAPH_H
#define READGRAPH_H
#include <path.h>
#include <map>
#include <vector>


class ReadGraph
{
public:
    static map<string,int>cits;
    static bool is_read;
    static map<string, vector<Path>> graph;
    static map<string, int> cityId;
    static vector<int> adjList[500];
    static vector<string>Cities;
    ReadGraph();
    static void GetGraph();
    static string StartFrom;
    static string GoTo;
    static int Budget;
    static bool writeFile();
};

#endif // READGRAPH_H
