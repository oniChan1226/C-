// data types
#include<iostream>
#include<typeinfo>
#include<string>
using namespace std;

int main() {
    // int a = 12345678910; //will give error
    // long double a = 12345678910;

    // char a[2] = {'/','0'}; //this gives error because a[0] = / & a[1] = 0 there should be 1 extra space ALWAYS where null terminator can reside
    // char a[100] = {'1','0'}; //ALWAYS terminate array with null terminator, however this still works 
    // char a[100] = {'1','0','\0'}; //like this

    // char a = 'a', b = 'b';
    // string a = "a", b = "b";
    // string result = a + b;
    // cout << result << endl;

    // pointers
    int num = 10;
    int* p_num = &num;
    int& ref_num = num;
    cout << &num << endl;
    cout << p_num << endl;
    cout << *p_num << endl;
    cout << &ref_num << endl;
    cout << ref_num << endl;
    ref_num = 20;
    cout << num << endl;

    return 0;
}