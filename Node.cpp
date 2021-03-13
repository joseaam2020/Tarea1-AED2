#include "Node.h"
#include "Collector.h"

Node::Node(){
    this->value = 0;
    this->next = nullptr;
}

/*
* operator new():
* Se cambia el operador new para que reciba espacios
* de memoria de Collector
*/
void* Node::operator new(size_t size){
    cout << "Created a Node" << endl;
    void* p = ::new(Collector::getInstance().getSpace()) Node;
    return p;
}

/*
* operator delete():
* Se cambia el operador delete para que guarde espacios
* de memoria en Collector
*/  
void Node::operator delete(void* p){
    cout << "Deleted a Node" << endl;
    Collector::getInstance().saveSpace(p);
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
