// pointers & reference
#include<iostream>

void increment_ref(int& value) {
    value++;
}
void increment_ptr(int* ptr) {
    (*ptr)++;
}

int main() {
    int var = 10;
    std:: cout << var << std:: endl;
    increment_ref(var);
    std:: cout << var << std:: endl;
    increment_ptr(&var);
    std:: cout << var << std:: endl;


    return 0;
}