//
//
//

#ifndef DATA_STRUCTURE_MINHEAP_H
#define DATA_STRUCTURE_MINHEAP_H
#include <vector>

class minheap {
public:
    minheap();
    int find_min();
    void insert(int key);
    void deleteMin();
    int parent(int i);
    int left_child(int i);
    int right_child(int i);
    int getSize();
    void check_heap_down(int i);
    void check_heap_up(int i);
    int print(int i);
    void swap(int x, int y);
private:
     std::vector <int> p;


};


#endif //DATA_STRUCTURE_MINHEAP_H
