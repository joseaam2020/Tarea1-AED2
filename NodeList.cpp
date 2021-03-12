#include "NodeList.h"

NodeList::NodeList(){
    this->head = NULL;
}

bool NodeList::isEmpty(){
    return this->head == NULL;
}

void NodeList::insert(int num){
    if(this->isEmpty()){
        Node* newNode = new Node();
        newNode->setValue(num);
        this->head = newNode;
    } else {
        Node* newNode = new Node();
        newNode->setValue(num);
        newNode->setNext(head);
        head = newNode;
    }
}

void NodeList::print(){
    stringstream print; 
    cout << "Empezando print" << endl;
    if(this->isEmpty()){
        cout << "[]" << endl;
    }else{
        Node temp = (*head);
        print << "[" << head->getValue() << flush; 
        while((temp.getNext() != NULL)){
            cout << "====iteration====" << endl;
            cout << "Current Value: " << temp.getValue() << endl;
            cout << "Next Location: " << temp.getNext() << endl;
            Node next = *temp.getNext();
            temp = next;
            print << "," << temp.getValue() << flush;
        }
        print << "]" << flush;
        cout << print.str() << endl;
    }
}

void NodeList::deleteAll(){
    if(this->isEmpty()){
        cout << "====Deleted====" << endl;
    }else{
        cout << "==Starting Delete==" << endl;
        Node* temp = head;
        Node* nextNode;
        nextNode = temp->getNext();
        while(nextNode != NULL){
            nextNode = temp->getNext();
            delete temp;
            temp = nextNode;
        }
        cout << "====Deleted====" << endl;
    }
}