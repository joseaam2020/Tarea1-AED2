#ifndef Node_H_
#define Node_H_

#include <iostream>
using namespace std;

class Node
{
private:
    int value;
    Node* next;
public:
    Node();
    void* operator new(size_t size);
    void operator delete(void* p);
    int getValue();
    Node* getNext();
    void setValue(int value);
    void setNext(Node* next);
};

#endif /* Node_H_*/