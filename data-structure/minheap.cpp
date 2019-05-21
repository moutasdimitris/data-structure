//
// Created by Windows on 2/5/2019.
//

#include "minheap.h"
#include <iostream>

//Insert key on vector
void minheap::insert(int key){
    p.push_back(key);
    int s=getSize();
    check_heap_up(s);
}

minheap::~minheap() {
    p.clear();
}
//Delete min (p[0])
void minheap::deleteMin() {
    std::vector<int> ::iterator it;
    it=p.begin();
    p.erase(it);
        p[0] = p.back();
        p.pop_back();
        // call check_heap_down on root node
        check_heap_down(0);
}
//Return min from vector
//Actual p[0]
int minheap::find_min() {
    return p[0];
}
//Return parent p[i]
int minheap::parent(int i) {
    return p[(i-1)/2];
}
//Return left child of p[i]
int minheap::left_child(int i) {
    return p[(2*i+1)];
}
//Return right child of p[i]
int minheap::right_child(int i) {
    return p[(2*i+2)];
}
//Return vector size
int minheap::getSize() {
    return p.size();
}

void minheap::check_heap_down(int i)
{
    // get left and right child of node at index i
  //  int left = left_child(i);
   // int right = right_child(i);
   /* if (p[i]>p[left]){
        swap(p[i],p[left]);
    }
    if (p[i]>p[right]){
        swap(p[i],p[right]);
    }
    for (int k=i;k<parent(p.size());k++)
    check_heap_down(k);*/
   int par=parent(i);
    if (par>left_child(i)){
        swap(par,left_child(i));
    }
    if (par>right_child(i)){
        swap(par,right_child(i));
    }
    for (int k=i;k<parent(p.size());k++)
        check_heap_down(k);
}

// Recursive check_heap-up algorithm
void minheap::check_heap_up(int i)
{
    // check if node at index i and its parent violates
    // the heap property
    int par=parent(i);
  /*  int left=left_child(i);
    int right=right_child(i);
    if (p[par]>p[left]){
        swap(p[par],p[left]);
    }
    if (p[par]>p[right]){
        swap(p[par],p[right]);
    }
    for (int k=i;k>0;k--){
        check_heap_up(k);
    }*/
    if (par>left_child(i)){
        swap(par,left_child(i));
    }
    if (par>right_child(i)){
        swap(par,right_child(i));
    }
    for (int k=i;k>0;k--){
        check_heap_up(k);
    }

}
//Swap x,y values
void minheap::swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;

}
//Return p values to print
int minheap::print(int i) {
        return p[i];
}

minheap::minheap() {
    std::vector <int> p;
}
