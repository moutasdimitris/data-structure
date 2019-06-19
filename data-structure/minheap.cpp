//
// Created by Windows on 2/5/2019.
//

#include "minheap.h"
#include <iostream>

//Insert key on vector
void minheap::insert(int key){
    p.push_back(key);
    for (int i=getSize();i>=0;i--)
    {
        heap(i);
    }

}



//Delete min
void minheap::deleteMin() {
    swap(p[0],p.back());
    p.pop_back();
    heap(0);

}
//Return min from vector
//Actual p[0]
int minheap::find_min() {
    return p[0];
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


//Swap x,y values
void minheap::swap(int& x, int& y) {
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

void minheap::heap(int i){
    int right_child_position=right_child(i);
    int left_child_position=left_child(i);
    int smallest_element_position=i;

    if (p[left_child_position] < p[smallest_element_position] && left_child_position<getSize())
    {
        smallest_element_position = left_child_position;
    }

    if (p[right_child_position] < p[smallest_element_position] && right_child_position<getSize())
    {
        smallest_element_position = right_child_position;
    }

    if(smallest_element_position != i)
    {
        swap(p[smallest_element_position], p[i]);
        heap(smallest_element_position);
    }
}

