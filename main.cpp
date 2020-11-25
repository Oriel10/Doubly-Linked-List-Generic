#include <iostream>

#include "double_linked_list.h"

int main(int, char**) {
    DLinkedList<int*> list1;
    list1.insertOrdered(6);
    list1.insertOrdered(7);
    list1.insertOrdered(9);
    list1.insertOrdered(15);
    list1.insertLast(17);
    list1.insertFirst(1);
    Node<int*>* tmp = list1.find_key(6); 
    Node<int*>* tmp1 = list1.find_key(17); 
    Node<int*>* tmp2 = list1.find_key(15); 
    list1.insertBefore(5,nullptr,tmp);
    
    
    for(DLinkedList<int*>::iterator it = list1.begin();it != list1.end();++it){
        std::cout<<(*it)->key<<" ";
    }
    std::cout<<std::endl;
    for(Node<int*>* node1 : list1){
        std::cout<<"-";
        std::cout<<node1->key;
    }
}
