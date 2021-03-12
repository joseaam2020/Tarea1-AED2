#include <iostream>
#include "Node.h"
#include "NodeList.h"

using namespace std;

int main(){
    NodeList list; 
    list.insert(5);
    list.insert(4);
    list.insert(3);
    list.insert(2);
    list.insert(1);
    list.print();
    list.deleteAll();
}