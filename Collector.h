#ifndef Collector_H_
#define Collector_H_ 

#include <iostream>
#include "Node.h"
#include "CollectorNode.cpp"

using namespace std;

class Collector
{
private:
    Collector();
    CollectorNode* head;
    static Collector instance;
public: 
    static Collector getInstance(){
        return instance;
    };
    bool isEmpty();
    Node* getSpace();
    void saveSpace(Node* location);
    Node* pop();
};

Collector Collector::instance;


#endif /*Collector_H_*/