#include <iostream>
#include "Node.h"

using namespace std;

class CollectorNode{
private: 
    Node* location; 
    CollectorNode* next;
public: 
    CollectorNode();
    Node* getLocation(){
        return this->location;
    };
    CollectorNode* getNext(){
        return this->next;
    };
    void setLocation(Node* location){
        this->location = location;
    };
    void setNext(CollectorNode* next){
        this->next = next;
    };
};