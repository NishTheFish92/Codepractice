#include <iostream>
using namespace std;


class Node {
    public:
    int data;
    Node* next;

    Node(){
        data = 0;
        next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
    Node* head;
    public:
    LinkedList(){
        head = NULL;
    }
    void insertNode(int);

    void printlist();

    void deletenode(int);
};

void LinkedList::insertNode(int data){
    Node* newnode = new Node(data);
    
}