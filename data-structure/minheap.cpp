//
// Created by Windows on 2/5/2019.
//

#include "minheap.h"
#include <fstream>
void minheap::build(std::string file_name) {
   std::ifstream input;
   input.open(file_name);
   std::string line;
   int cnt=0;
   while(getline(input,line)){
       if (cnt==0){
           size=stoi(line);
           cnt++;
       }else{

       }
   }
input.close();

}
void minheap::insert(int key) {
    int n=size-1;
    if (size<maxSize){
        s[n]=key;
    }
    while (n!=0 && s[parent(key)]>s[n]){
        int temp=s[parent(key)];
        s[parent(key)]=s[n];
        s[n]=temp;
        n=parent(key);
    }
}

void minheap::deleteMin() {

}
int minheap::getSize() {
    return size;
}
int minheap::find_min() {
    return s[0];
}
