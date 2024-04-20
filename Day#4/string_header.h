// String Implementation
#include <iostream>
using namespace std;

class String {
    char* buffer;
public:
    String();
    String(const char*);
    String(String&);
    void strcpy(const char*);
    int get_length(const char*);
    void print();
    ~String();

};