//
// Created by Windows on 2/5/2019.
//

#include "minheap.h"
#include <iostream>

//Insert key on vector
void minheap::insert(int key){
    p.push_back(key);
    int s=getSize()-1;
    check_heap_up(s);
}
//Delete min (p[0])
void minheap::deleteMin() {
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
    return (i-1)/2;
}
//Return left child of p[i]
int minheap::left_child(int i) {
    return (2*i+1);
}
//Return right child of p[i]
int minheap::right_child(int i) {
    return (2*i+2);
}
//Return vector size
int minheap::getSize() {
    return p.size();
}

void minheap::check_heap_down(int i)
{
    // get left and right child of node at index i
    int left = left_child(i);
    int right = right_child(i);
    int smallest = i;

    // compare A[i] with its left and right child
    // and find smallest value
    if (left < getSize() && p[left] < p[i])
        smallest = left;

    if (right < getSize() && p[right] < p[smallest])
        smallest = right;

    // swap with child having lesser value and
    // call check_heap_down on the child
    if (smallest != i) {
        swap((p[i]), (p[smallest]));
        check_heap_down(smallest);
    }
}

// Recursive check_heap-up algorithm
void minheap::check_heap_up(int i)
{
    // check if node at index i and its parent violates
    // the heap property
    int par=parent(i);
    if (i && p[par] > p[i])
    {
        // swap the two if heap property is violated
        swap((p[i]), (p[par]));

        // call Heapify-up on the parent
        check_heap_up(par);
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
