//
// Created by farid on 19/12/22.
//
#include <iostream>

#ifndef TREECPP_TREE_H
#define TREECPP_TREE_H

template<class T>
 struct Noeud{
    T data;
    struct Noeud *left;
    struct Noeud *right;
    explicit Noeud(T value){
        data=value;
        left= nullptr;
        right=nullptr;

    }
};
template<class T>
class Tree {
public:
    Noeud<T>* root;

    Tree();
    Noeud<T>* insert(Noeud<T>* root,T data);
    void show(Noeud<T>* root);
    void remove(T data);

};


#endif //TREECPP_TREE_H
