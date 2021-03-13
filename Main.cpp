#include <iostream>
#include "Node.h"
#include "NodeList.h"
#include "Collector.h"

using namespace std;

int main(){
    NodeList list;  
    list.insert(5);
    list.insert(4);
    list.insert(3); 
    list.insert(2);
    list.insert(1);
    list.print();
    list.deleteNode(1);
    Collector::getInstance().print();
    list.print();
    list.deleteNode(3);
    Collector::getInstance().print();
    list.print();
    list.insert(6);
    list.print();
    Collector::getInstance().print();
    list.insert(7);
    list.print();
    Collector::getInstance().print();
    list.deleteAll();
}