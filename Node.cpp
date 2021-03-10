#include <iostream>
#include "Node.h"

using namespace std;

Node::Node(){
    this->value = 0;
    this->next = NULL;
}

void* Node::operator new(size_t size){
    cout << "Created a Node" << endl;
    void* p = ::new Node;
    return p;
}

void Node::operator delete(void* p){
    cout << "Deleted a Node" << endl;
    free(p);
}

int Node::getValue(){
    return this->value;
}

int* Node::getNext(){
    return this->next;
}

void Node::setNext(int* next){
    this->next = next;
}

void Node::setValue(int value){
    this->value = value;
}
