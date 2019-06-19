//
// Created by Windows on 2/5/2019.
//

#ifndef DATA_STRUCTURE_HASHTABLE_H
#define DATA_STRUCTURE_HASHTABLE_H
#include <list>
using namespace std;

class hashtable {
public:
     list <int> *l;
     hashtable(int size);
     int getSize();
     bool search(int key);
     void insert (int key);
     int hash_func(int key);
     void print();
private:
     int cap;
};


#endif //DATA_STRUCTURE_HASHTABLE_H
