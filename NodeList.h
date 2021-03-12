#ifndef NodeList_H_
#define NodeList_H_

#include <iostream>
#include <sstream>
#include "Node.h"
using namespace std;

class NodeList
{
private:
    Node* head;
public:
    NodeList();
    bool isEmpty();
    void insert(int num);
    void print();
    void deleteAll();
    void deleteNode(int num);
};

#endif /*NodeList_H_*/