//
// Created by Windows on 2/5/2019.
//

#include "maxheap.h"
#include <iostream>

maxheap::maxheap() {
    std::vector <int> v;
}

int maxheap::getSize() {
    return v.size();
}

int maxheap::find_min() {
    return v.back();
}

int maxheap::print(int i) {
    return v[i];
}

void maxheap::swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int maxheap::parent(int i) {
    return (i-1)/2;
}

int maxheap::right_child(int i) {
    return (2*i+2);
}

int maxheap::left_child(int i) {
    return (2*i+1);
}

void maxheap::insert(int key) {
    v.push_back(key);
    int index=getSize()-1;
    check_heap_up(index);
}

void maxheap::deleteMax() {
    v[0] = v.back();
    v.pop_back();
    // call check_heap_down on root node
    check_heap_down(0);
}

void maxheap::check_heap_down(int i) {
    // get left and right child of node at index i
    int left = left_child(i);
    int right = right_child(i);

    int largest = i;

    // compare A[i] with its left and right child
    // and find largest value
    if (left < getSize() && v[left] > v[i])
        largest = left;

    if (right < getSize() && v[right] > v[largest])
        largest = right;

    // swap with child having greater value and
    // call heapify-down on the child
    if (largest != i) {
        swap(v[i], v[largest]);
        check_heap_down(largest);
    }
}

void maxheap::check_heap_up(int i) {
    // check if node at index i and its parent violates
    // the heap property
    int par=parent(i);
    if (i && v[par] < v[i])
    {
        // swap the two if heap property is violated
        swap(v[i], v[par]);

        // call Heapify-up on the parent
        check_heap_up(par);
    }
}