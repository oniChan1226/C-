#include<iostream>
using namespace std;

bool isPrime(int n) {
    for(int i = 2; i < n-1; i++) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Input Number: ";
    cin >> n;
    if(isPrime(n)) {
        cout << "Prime\n";
    }
    else {
        cout << "Non-Prime\n";
    }

    return 0;
}
// isPrime or not