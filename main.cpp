#include <iostream>
#include "Tree.cpp"

int main() {
    Tree<double> *t=new Tree<double>();
    for (int i = 10;i>=0;i--){
        t->root=t->insert(t->root,i);

    }
    for (int i = -10;i<0;i++){
        t->root=t->insert(t->root,i);

    }
    t->show(t->root);
    return 0;
}
