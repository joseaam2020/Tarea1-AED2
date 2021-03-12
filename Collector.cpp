#include "Collector.h"

Collector::Collector(){
    this->head = nullptr;
}

bool Collector::isEmpty(){
    return this->head == nullptr;
}

void Collector::saveSpace(Node* location){
    if(Collector::instance.isEmpty()){
        Collector::instance.head = new CollectorNode;
        Collector::instance.head->setLocation(location);
    } else{
        CollectorNode* newNode = new CollectorNode;
        newNode->setLocation(location);
        newNode->setNext(head);
        head = newNode;
    }
}

Node* Collector::getSpace(){
    if(Collector::instance.isEmpty()){
        Node* newSpace = (Node*) malloc(sizeof(Node));
        return newSpace;
    } else{
        return Collector::instance.pop();
    }
}

Node* Collector::pop(){
    Node* location = head->getLocation();
    head = head->getNext();
    return location;
}