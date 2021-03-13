#include <iostream>
#include "Node.h"

using namespace std;

class CollectorNode{
private: 
    void* location; 
    CollectorNode* next;
public: 
    CollectorNode(){};
    void* getLocation(){
        return this->location;
    };
    CollectorNode* getNext(){
        return this->next;
    };
    void setLocation(void* location){
        this->location = location;
    };
    void setNext(CollectorNode* next){
        this->next = next;
    };
};