//
// Created by Windows on 2/5/2019.
//

#ifndef DATA_STRUCTURE_AVLTREE_H
#define DATA_STRUCTURE_AVLTREE_H


#include <cstddef>

struct node{
    int data;
    node* left;
    node* right;
}*root;

class avltree {

public:
    avltree(){root=NULL;};
    int height(node* );
    int diff(node* );
    node* rr_rotation(node *);
    node* ll_rotation(node *);
    node* lr_rotation(node *);
    node* rl_rotation(node *);
    node* balance(node *);
    node* insert(node *, int );
    void display(node *, int);
    void postorder(node *tree);
};


#endif //DATA_STRUCTURE_AVLTREE_H
