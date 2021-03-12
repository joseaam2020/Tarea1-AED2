#include "Node.h"

Node::Node(){
    this->value = 0;
    this->next = nullptr;
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

Node* Node::getNext(){
    return this->next;
}

void Node::setNext(Node* next){
    this->next = next;
}

void Node::setValue(int value){
    this->value = value;
}
