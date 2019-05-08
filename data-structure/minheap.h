//
//
//

#ifndef DATA_STRUCTURE_MINHEAP_H
#define DATA_STRUCTURE_MINHEAP_H

class minheap {
public:
    minheap(int size);
    static int min(){ return s[0];};
    static void insert(int key);
    static void deleteMin();
    static int parent(int k){return (k-1)/2;};
   //static int left(int k){return (2*k+1);};
    //static int right(int k){return (2*k+2);};
    static int getSize(){return size;};
private:
     static int size;
     static int maxSize;
     static int *s;

};


#endif //DATA_STRUCTURE_MINHEAP_H
