#ifndef D_LINKED_LIST
#define D_LINKED_LIST
#include <iostream>
#include "assert.h"

template<class Data>// Data,Key
struct Node{
    Data data;
    int key;
    Node* next;
    Node* prev;
    Node(int key,Data data = Data()): data(data),key(key),next(nullptr),prev(nullptr){}
    ~Node(){
        delete data;
    }
};

template<class Data>
class DLinkedList{
    Node<Data> *head,*tail;

public:
    DLinkedList() : head(nullptr), tail(nullptr){}
    DLinkedList(const DLinkedList& other) = delete;
    DLinkedList& operator=( const DLinkedList& other) = delete;
    ~DLinkedList(); // Done
    void insertFirst(int key, Data data = Data()); 
    void insertOrdered(int key, Data data = Data()); // 
    //assuming before is not a nullptr
    void insertBefore(int key,Data data, Node<Data>* before);
    void insertLast(int key, Data data = Data()); 
    void deleteNode(int key); //
    Node<Data>* find_key(int key) const;//
    void print_list() const;
    class iterator{
        DLinkedList<Data>* list;
        Node<Data>* curr_node;
        iterator(DLinkedList<Data>* list,Node<Data>* some_node) : curr_node(some_node), list(list){}
        friend class DLinkedList<Data>;
    public:
        Node<Data>* operator*() const{
            return curr_node;
        }
        iterator& operator++(){
            curr_node = curr_node->next;
            return *this;
        }
        bool operator==(const iterator& it) const{
            assert(list == it.list);
            return it.curr_node == curr_node;
        }
        bool operator!=(const iterator& it) const{
            return !(*this == it);
        }
    };
    iterator begin(){
        return iterator(this,head);
    } 
    iterator end(){
        return iterator(this,nullptr);
    }
};

template<class Data>
DLinkedList<Data>::~DLinkedList(){
    Node<Data>* todel = nullptr;
    while(head){
        todel = head;
        head = head->next;
        delete todel;
    }
    head = nullptr;
}


template<class Data>
void DLinkedList<Data>::insertFirst(int key, Data data){
    Node<Data>* new_node = new Node<Data>(key,data);
    if(head == nullptr){
        head = new_node;
        tail = new_node;
        // new_node->next = nullptr;
        // new_node->prev = nullptr;
        return;
    }
    new_node->next = head;
    head = new_node;
    new_node->next->prev = head;
    new_node->prev = nullptr;
}

//assuming key doesnt already exist, can check it with "find_key" function before use.
//use only when insertFirst/insertLast are not used at all
template<class Data>
void DLinkedList<Data>::insertOrdered(int key, Data data){
    Node<Data>* new_node = new Node<Data>(key,data);
    if(head == nullptr){
        head = new_node;
        tail = new_node;
        return;
    }
    Node<Data>* tmp = head;
    while(tmp != nullptr){
        if((tmp->key < key && tmp->next == nullptr) || (tmp->key < key && tmp->next->key > key)){
            if(tmp->next != nullptr){
                new_node->next = tmp->next;
                tmp->next = new_node;
                new_node->next->prev = new_node;
                new_node->prev = tmp;
                return;
            }
            else{
                tmp->next = new_node;
                new_node->next = nullptr;
                new_node->prev = tmp;
                tail = new_node;
            }
        }
        tmp=tmp->next;
    }
    // new_node->next = head;
    // head = new_node;
    // new_node->next->prev = head;
    // new_node->prev = nullptr;
}

template<class Data>
void DLinkedList<Data>::insertBefore(int key,Data data, Node<Data>* before){
    if(before == nullptr){
        return;
    }
    Node<Data>* new_node = new Node<Data>(key,data);
    if(before->prev == nullptr){//before points to 1st element
        before->prev = new_node;
        new_node->prev = nullptr;
        new_node->next = before;
        head = new_node;
        return;
    }
    new_node->prev = before->prev;
    before->prev->next = new_node;
    new_node->next = before;
    before->prev = new_node;
}

template<class Data>
void DLinkedList<Data>::insertLast(int key, Data data){
    if(tail == nullptr){
        insertFirst(key,data);
    }
    else if(tail->next == nullptr){
        Node<Data>* tmp = tail;
        Node<Data>* new_node = new Node<Data>(key,data);
        tail->next = new_node;
        tail = new_node;
        tail->prev = tmp;
        tail->next = nullptr;
    } 
}

//assuming keys are ordered from low to high
template<class Data>
Node<Data>* DLinkedList<Data>::find_key(int key) const{
    Node<Data>* tmp = head;
    while(tmp != nullptr){
        if(tmp->key == key){
            return tmp;
        }
        tmp = tmp->next;
    }
    return nullptr;//in case key was not found
}

template<class Data>
void DLinkedList<Data>::print_list() const{
    // int counter = 0;
    Node<Data>* tmp = head;
    while(tmp != nullptr){
        std::cout<<tmp->key<<" ";
        tmp = tmp->next;
        // counter++;
    }
}
#endif 