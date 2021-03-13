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

void NodeList::deleteNode(int num){
    if(this->isEmpty()){
        cout << "Not found" << endl;
    } else {
        if(this->head->getValue() == num){
            Node* toDelete = this->head;
            this->head = this->head->getNext();
            delete toDelete;
        } else{
            Node* current = this->head->getNext();
            Node* last = this->head;
            bool deleted = false;
            while(current != NULL){
                if(current->getValue()==num){
                    last->setNext(current->getNext());
                    delete current;
                    deleted = true;
                    break;
                } else{
                    last = current;
                    current = current->getNext();
                }
            }
            if(deleted){
                cout << "Deleted" << endl;
            } else {
                cout << "Not found" << endl;
            }
        }
    }
}

void NodeList::print(){
    stringstream print; 
    cout << "====Lista====" << endl;
    if(this->isEmpty()){
        cout << "[]" << endl;
    }else{
        Node temp = (*head);
        print << "[" << head->getValue() << flush; 
        while((temp.getNext() != NULL)){
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