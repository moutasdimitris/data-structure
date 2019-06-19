//
//
//

#ifndef DATA_STRUCTURE_MINHEAP_H
#define DATA_STRUCTURE_MINHEAP_H
#include <vector>

class minheap {
public:
    minheap();
    void heap(int i);
    int find_min();
    void insert(int key);
    void deleteMin();
    int left_child(int i);
    int right_child(int i);
    int getSize();
    int print(int i);
    void swap(int& x, int& y);
private:
     std::vector <int> p;


};


#endif //DATA_STRUCTURE_MINHEAP_H
