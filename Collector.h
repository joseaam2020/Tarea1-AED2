#ifndef Collector_H_
#define Collector_H_ 

#include <iostream>
#include <sstream>
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
    void* getSpace();
    void saveSpace(void* location);
    void* pop();
    void print();
};



#endif /*Collector_H_*/