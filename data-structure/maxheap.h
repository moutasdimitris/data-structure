//
// Created by Windows on 2/5/2019.
//

#ifndef DATA_STRUCTURE_MAXHEAP_H
#define DATA_STRUCTURE_MAXHEAP_H
#include <vector>

class maxheap {
public:
    maxheap();
    int find_max();
    void insert(int key);
    void deleteMax();
    int parent(int i);
    int left_child(int i);
    int right_child(int i);
    int getSize();
    int print(int i);
    void swap(int& x, int& y);
    void max_heap(int i);
private:
    std::vector <int> v;

};


#endif //DATA_STRUCTURE_MAXHEAP_H
