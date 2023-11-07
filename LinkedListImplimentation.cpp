#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }
    void insertNode(int);

    void printlist();

    void deletenode(int);
};

void LinkedList::insertNode(int data)
{
    Node *newnode = new Node(data);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    // Traversing the LL
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void LinkedList::printlist()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// void LinkedList::deletenode(int Nodeindex){
// }

int main(){
    LinkedList list;
    list.insertNode(5);
    list.insertNode(2);
    list.insertNode(17);
    list.insertNode(53);
    list.insertNode(51);
}