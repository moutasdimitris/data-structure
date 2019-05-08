//
// Created by Windows on 2/5/2019.
//

#include "minheap.h"
minheap::minheap(int size) {
    sizes=0;
    maxSize=size;
    s = new int [size];

}
void minheap::insert(int key) {
    int n=sizes-1;
    if (sizes<maxSize){
        s[n]=key;
    }
    while (n!=0 && s[parent(key)]>s[n]){
        int temp=s[parent(key)];
        s[parent(key)]=s[n];
        s[n]=temp;
        n=parent(key);
    }
}

