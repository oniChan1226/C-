// Linked List
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node():data{0}, next{NULL} {}
    Node(int data):data{data}, next{NULL} {}
};

class linkedlist {
    Node* head;
    int size;
public:
    linkedlist():head{NULL}, size{0} {}
    void insert(int);
    void insertAtHead(int);
    void insertAtTail(int);
    void insertAt(int, int);
    void getMiddle();
    bool isEmpty();
    void sort();
    void removeDuplicates();
    void swap(int&,int&);
    void deleteNode(int);
    void reverse();
    bool detectCycle();
    void display();
    ~linkedlist();
    
};