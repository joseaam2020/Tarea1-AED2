#include "Collector.h"

Collector::Collector(){
    this->head = nullptr;
}

Collector Collector::instance;

bool Collector::isEmpty(){
    return this->head == nullptr;
}

void Collector::saveSpace(void* location){
    if(Collector::instance.isEmpty()){
        Collector::instance.head = new CollectorNode;
        Collector::instance.head->setLocation(location);
    } else{
        CollectorNode* newNode = new CollectorNode;
        newNode->setLocation(location);
        newNode->setNext(Collector::instance.head);
        Collector::instance.head = newNode;
    }
}

void* Collector::getSpace(){
    if(Collector::instance.isEmpty()){
        void* newSpace = malloc(sizeof(Node));
        return newSpace;
    } else{
        return Collector::instance.pop();
    }
}

void* Collector::pop(){
    void* location = this->head->getLocation();
    this->head = this->head->getNext();
    return location;
}

void Collector::print(){
    stringstream print; 
    cout << "====Collector====" << endl;
    if(Collector::instance.isEmpty()){
        print << "[]" << flush;
    } else{
        print 
        << "[" 
        << Collector::instance.head->getLocation() 
        << flush;
        CollectorNode temp = *Collector::instance.head;
        while((temp.getNext() != NULL)){
            CollectorNode next = *temp.getNext();
            temp = next;
            print << "," << temp.getLocation() << flush;
        }
        print << "]" << flush;
    } cout << print.str() << endl;

}