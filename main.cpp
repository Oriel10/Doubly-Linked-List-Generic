#include <iostream>

#include "double_linked_list.h"

int main(int, char**) {
    DLinkedList<int*> list1;
    list1.insertOrdered(6);
    list1.insertOrdered(7);
    list1.insertOrdered(9);
    list1.insertOrdered(15);
    list1.print_list();
    
    std::cout<<std::endl;
    list1.reverseList();
    list1.print_list();

    std::cout<<"delete first and last elements in the reversed list"<<std::endl;
    list1.pop_back();
    list1.pop_front();
    list1.print_list();
    
    // for(DLinkedList<int*>::iterator it = list1.begin();it != list1.end();++it){
    //     std::cout<<(*it)->key<<" ";
    // }
    // DLinkedList<int*> list2 = list1;
    // for(DLinkedList<int*>::Node node1 : list2){
    //     std::cout<<"-";
    //     std::cout<<node1->key;
    // }
    // std::cout<<std::endl;
    // for(DLinkedList<int*>::reverse_iterator it = list2.r_begin();it != list2.r_end();++it){
    //     std::cout<<(*it)->key<<" ";
    // }
}
