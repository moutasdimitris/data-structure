//
// Created by Windows on 2/5/2019.
//

#ifndef DATA_STRUCTURE_GRAPH_H
#define DATA_STRUCTURE_GRAPH_H
#include <vector>
using namespace std;
struct pair{
    int num1,num2;
};
class graph {
public:
    void insert(int num1,int num2);
    void print();
    bool exists(int num1,int num2);
    int getSize();
    vector<pair<int,int> > Graph;
};


#endif //DATA_STRUCTURE_GRAPH_H
