#include<iostream>
using namespace std;

int reverse(int); //forward decleration
bool validity(int); //forward decleration
bool palindrome(int,int); //forward decleration

int main() {
    // reverse a Number, check palindrome or not
    // eg 121 == 121 in rev also
    int n;
    cout << "Input Number: ";
    cin >> n;
    int rev = reverse(n);
    cout << rev << endl;
    cout << bool(palindrome(n, rev)) << endl; //type_casting

    return 0;
}
int reverse(int n) {
    if(validity(n)){
        return -1;
    }
    int reversed_number = 0;
    while(n != 0) {
        int remainder = n%10;
        reversed_number = reversed_number * 10;
        reversed_number = reversed_number + remainder;
        n = n/10;
    }
    return reversed_number;
}

bool validity(int n) {
    if(n == 0){
        return true;
    }
    return false;
}

bool palindrome(int rev, int n) {
    if(rev == n) {
        return true;
    }
    return false;
}