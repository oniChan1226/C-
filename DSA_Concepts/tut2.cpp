#include "tut2.h"

void linkedlist:: insert(int data) {
    Node* newNode = new Node(data);
    size++;
    if(head == NULL){
        head = newNode;
    }
    else {
        Node* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void linkedlist:: insertAtHead(int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}
void linkedlist:: insertAtTail(int data) {
    if(head == NULL){
        insertAtHead(data);
        return;
    }
    Node* newNode = new Node(data);
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}
void linkedlist:: insertAt(int pos, int data) {
    if(pos < 1 || pos > size + 1){
        return;
    }
    if(isEmpty() || pos == 1) {
        insertAtHead(data);
    }
    Node* newNode = new Node(data);
    Node* temp = head;
    Node* prev = NULL;
    int counter = 1;
    while(temp != NULL && counter != pos) {
        prev = temp;
        temp = temp->next;
        counter++;
    }
    if(counter == pos) {
        prev->next = newNode;
        newNode->next = temp;
    }
    else {
        cout << "Invalid Position\n";
        return;
    }

}
bool linkedlist:: isEmpty() {
    if(head == NULL){
        return true;
    }
    return false;
}
void linkedlist:: swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
void linkedlist:: sort() {
    if(isEmpty() || head->next == NULL) {
        return;
    }
    // bubbleSort()
    // cout << size << endl;
    Node* temp;
    int i,j;
    for(i = 0; i < size - 1; i++) {
        temp = head;
        for(j = 0; j < size - i - 1; j++) {
            if(temp->next != NULL && temp->data > temp->next->data){
                swap(temp->data,temp->next->data);
            }
            temp = temp->next;
        }
    }
}
void linkedlist:: deleteNode(int data) {
    if(isEmpty()){
        cout << "Empty linked list\n";
        return;
    }
    if(head->data == data) {
        if(head->next != NULL) {
            Node* temp = head;
            head = temp->next;
            delete temp;
            return;
        }
        delete head;
    }
    Node* temp = head->next;
    Node* prev = head;
    while(temp != NULL) {
        if(temp->data == data) {
            prev->next = temp->next;
            delete temp;
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    
}
void linkedlist:: getMiddle() {
    if(isEmpty() || head->next == NULL) {
        return;
    }
    int size = this->size/2;
    Node* temp = head;
    int counter = 0;
    while(counter != size && temp != NULL){
        temp = temp->next;
        counter++;
    }
    if(counter == size) {
        cout << temp->data << endl;
    }
    else{
        return;
    }

}
bool linkedlist:: detectCycle() {
    if(isEmpty() || head->next == NULL){
        return false;
    }
    Node* slow = head;
    Node* fast = head->next;
    while(fast != NULL && fast->next != NULL) {
        if(slow == fast) {
            return true;
        }
        slow = slow->next;
        fast = fast->next->next;
    }

}
void  linkedlist:: removeDuplicates() {
    if(isEmpty() || head->next == NULL) {
        return;
    }
    Node* temp = head;
    Node* inner_temp;
    while(temp != NULL) {
        inner_temp = temp->next;
        while(inner_temp != NULL) {
            if(temp->data == inner_temp->data) {
                temp->next = inner_temp->next;
                delete inner_temp;
                break;
            }
            inner_temp = inner_temp->next;
        }
        temp = temp->next;
    }
}
void linkedlist:: reverse() {
    if(isEmpty()) {
        return;
    }
    Node* current = head;
    Node* next = NULL;
    Node* prev = NULL;
    while(current != NULL) {
        // Store the next pointer
        next = current->next;
        // reverse the list
        current->next = prev;
        // Move pointers one step forward
        prev = current;
        current = next;
    }
    head = prev;
}
void linkedlist:: display() {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
linkedlist:: ~linkedlist() {
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL) {
        prev = temp;
        temp = temp->next;
        delete prev;
    }
}

int main() {
    linkedlist l1;
    // l1.deleteNode(10);
    for(int i = 5; i >= 1; i--)
        l1.insert(i*10);
    l1.insert(10);
    l1.display();
    l1.deleteNode(20);
    l1.sort();
    l1.display();
    l1.insertAtHead(2);
    l1.insertAt(3, 42);
    l1.display();
    l1.reverse();
    l1.display();
    l1.getMiddle();
    cout << l1.detectCycle() << endl;
    l1.removeDuplicates();
    l1.display();

    return 0;
}