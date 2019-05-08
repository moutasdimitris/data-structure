//
//
//

#ifndef DATA_STRUCTURE_MINHEAP_H
#define DATA_STRUCTURE_MINHEAP_H
#include <string>
class minheap {
public:
    void build(std::string file_name);
    static int find_min();
    static void insert(int key);
    static void deleteMin();
    static int parent(int k){return (k-1)/2;};
    static int getSize();
private:
     static int size;
     static int maxSize;
     static int *s;


};


#endif //DATA_STRUCTURE_MINHEAP_H
