//
// Created by Windows on 2/5/2019.
//

#ifndef DATA_STRUCTURE_HASHTABLE_H
#define DATA_STRUCTURE_HASHTABLE_H

#include <list>

class hashtable {
    std::list<int> *s;
public:
     hashtable(int size);
     int size;
     int getSize();
     bool search(int key);
     void insert (int key);
     void remove(int key);
     int hash_func(int key);

int value;


};


#endif //DATA_STRUCTURE_HASHTABLE_H
