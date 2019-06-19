//
// Created by Windows on 2/5/2019.
//

#include "hashtable.h"
#include <iostream>
#include <fstream>

using namespace std;



hashtable::hashtable(int size) {
    this->cap=size;
   l=new list <int>[size];
}

int hashtable::hash_func(int key) {
    return key%cap;
}

int hashtable::getSize() {
    return cap;
}

bool hashtable::search(int key) {
    int k=hash_func(key);
    bool s=false;
    list<int>::iterator i;
    for (i = l[k].begin();i != l[k].end(); i++) {
         if (*i == key)
             s=true;
    }
    return s;
}

 void hashtable::insert(int key) {
     int value=hash_func(key);
     l[value].push_back(key);
}

void hashtable::print() {
   ofstream out;
   out.open("hash.txt");
    for (int i = 0; i < cap; i++) {
        for (int x  : l[i])
            out <<"->"<< x;
        out<<endl;
    }
   out.close();
}

