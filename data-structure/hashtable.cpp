//
// Created by Windows on 2/5/2019.
//

#include "hashtable.h"
#include <iostream>
using namespace std;



hashtable::hashtable(int size) {
   s=new list<int>[size];
}
int hashtable::hash_func(int key) {
    return (key%size);
}

int hashtable::getSize() {
    return size;
}

bool hashtable::search(int key) {
    return hash_func(key);
}

 void hashtable::insert(int key) {
     value=hash_func(key);
    s[value].push_back(key);
}

void hashtable::remove(int key) {
     value=hash_func(key);
     list <int> ::iterator it;
     for ( it=s[value].begin();it!=s[value].end();it++){
         if (*it==key)
             break;
     }
       if (it!=s[value].end()){
           s[value].erase(it);
       }


}


