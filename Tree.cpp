//
// Created by farid on 19/12/22.
//

#include "Tree.h"

using namespace std;
template<class T>
Tree<T>::Tree() {
    root= nullptr;
};
template<class T>
 Noeud<T>* Tree<T>::insert(Noeud<T>* root,T data) {

    if (root==NULL) {
        root=new Noeud(data);

    }else if(data>root->data)
        root->right=insert(root->right,data);
    else
        root->left=insert(root->left,data);
     return root;
 }
template<class T>
 void Tree<T>::show(Noeud<T>* root){

     if (root){
         show(root->left);
         cout<<"\t"<<root->data;
         show(root->right);
     }


}