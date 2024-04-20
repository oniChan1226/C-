#include<iostream>
using namespace std;

int main() {
    // check even/odd
    // get ascii value of char
    int n;
    cin >> n;
    auto check = [n] () { 
        if(n%2 == 0) {
            return true;
        }
        return false;
    };
    bool isEven = check();
    cout << isEven << endl; 

    char ch;
    cin >> ch;
    cout << int(ch) << endl;

    return 0;
}
