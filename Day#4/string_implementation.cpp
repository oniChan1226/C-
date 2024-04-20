#include "string_header.h"

// Dafault Constructor
String:: String():buffer{NULL} {}
// Parametarized Constructor
String:: String(const char* data) {
    if(data == NULL) {
        buffer == NULL;
        return;
    }
    int size = get_length(data), i = 0;
    buffer = new char[size + 1];
    for(; i < size; i++) {
        buffer[i] = data[i];
    }
    buffer[i] = '\0';
}
// copy constructor
String:: String (String &obj) {
    int size = get_length(obj.buffer);
    this->buffer = new char[size];
    int i = 0;
    for(; i < size; i++) {
        this->buffer[i] = obj.buffer[i];
    }
    this->buffer[i] = '\0';
}
// get_length method
int String:: get_length(const char* data) {
    int i = 0;
    while(data[i] != '\0') {
        i++;
    }
    return i;
} 
// print string method
void String:: print() {
    cout << buffer << endl;
}
// deconstructor
String:: ~String() {
    delete[] buffer;
}

int main() {
    char name[20] = {"Fahad Khan\0"}; //when we pass my_arr(arr) like this it passes the address of 1st element of the array
    String str(name),str2(str);
    name[0] = 'A';
    str.print();
    str2.print();

    return 0;
}