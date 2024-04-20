#include<string>
#include<iostream>
using namespace std;

class car {
private:
    const int tag = 0;
    string model;
    int year;
    bool status;
    int times_started;
public:
    car():model("\0"), year(0), tag(10), status(false), times_started(0){ //const value can be overwritten in default constructor
        cout << "Default Constructor Called\n";
    }
    void set(string, int);
    void print_report(void);
    void start();
    void stop();
    ~car();
};