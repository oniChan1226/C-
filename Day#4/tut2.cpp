#include <iostream>
using namespace std;

class Base
{
    int id;

public:
    Base() : id{0} { cout << "Base Default Constructor\n"; };
    Base(int id) : id{id} { cout << "Base Parametarized Constructor\n"; }
    ~Base() { cout << "Base Deconstructor Called\n"; }
};

class Derived : public Base
{
    int id;

public:
    // Base class default is called automatically upon making a object of the derived class
    Derived() : id{0} { cout << "Derived Default Constructor\n"; }
    Derived(int id) : id{id}, Base(id) { cout << "Derived Parametarized Constructor\n"; }
    ~Derived() { cout << "Derived Deconstructor Called\n"; }
};

int main()
{
    // Base b1;
    // Derived d1(20);
    Base *b1 = new Base[3];
    delete[] b1;

    return 0;
}