#include<iostream>
using namespace std;

void print() {
    cout << "Hello World!\n";
}
// lambda func
auto display = []() {
    cout << "Hello World!\n";
};
auto add = [](int a, int b) {
    return (a + b);
};

int main() {
    cout << add(3,4) << endl;
    int multiplier = 4;

    auto times = [multiplier](int to_be_multiplied) {
    return (multiplier * to_be_multiplied);
    };
    cout << times(4) << endl;
    
    display();

    return 0;
}