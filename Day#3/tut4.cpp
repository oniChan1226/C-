#include<iostream>
using namespace std;

void fibonacci(int);

int main() {
    // fibbonnaci series
    int n;
    cout << "Input Number: ";
    cin >> n;
    fibonacci(n);

    return 0;
}

void fibonacci(int n) {
    int t0 = 0, t1 = 1, result = 0;
    for(int i = 0; i < n; i++) {
        cout << result << " ";
        t0 = t1;
        t1 = result;
        result = t0 + t1;
    }
}