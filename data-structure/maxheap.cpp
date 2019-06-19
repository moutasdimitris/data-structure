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

int maxheap::find_max() {
    return v[0];
}

int maxheap::print(int i) {
    return v[i];
}

void maxheap::swap(int& x, int& y) {
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
    for (int i=getSize();i>=0;i--){
        max_heap(i);

    }
}

void maxheap::deleteMax() {
    std::vector <int> ::iterator it;
    it=v.begin();
    v.erase(it);
    v[0] = v.back();
    v.pop_back();
    for (int i=getSize();i>=0;i--){
        max_heap(i);
    }
}

void maxheap::max_heap(int i)
{
        int right_child_position=right_child(i);
        int left_child_position=left_child(i);
        int biggest_element_position=i;

        if (v[left_child_position] > v[biggest_element_position] && left_child_position<getSize())
        {
            biggest_element_position = left_child_position;
        }

        if (v[right_child_position] > v[biggest_element_position] && right_child_position<getSize())
        {
            biggest_element_position = right_child_position;
        }

        if(biggest_element_position != i)
        {
            swap(v[biggest_element_position], v[i]);
            max_heap(biggest_element_position);
        }
    }



