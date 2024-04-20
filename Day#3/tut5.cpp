#include<iostream>
using namespace std;

#define SIZE 4
void get_stats(int* ptr);

int main() {
    // greatest of three numbers
    int arr[SIZE];
    cout << "Input 3 Numbers: ";
    for(int i = 0; i < SIZE - 1; i++) {
        cin >> arr[i];
    }
    // int max = get_max(arr);
    arr[SIZE - 1] = '\0';

    for(int i = 0; i < SIZE - 1; i++) {
        cout << arr[i];
    }
    // get_stats(arr);
    auto get_max = [arr] () {
        int max = arr[0], i = 1;
        while(arr[i] != '\0') {
            if(max < arr[i]) {
                max = arr[i];
            }
            i++;
        }
        return max;
    };

    cout << "Maximum Element in array is: " << get_max() << endl;

    return 0;
}
void get_stats(int* ptr) {
    cout << "\nptr is: " << ptr << endl;
    cout << "\nptr + 1 is: " << ptr + 1 << endl;
    cout << "*ptr is: " << (*ptr) << endl;
    cout << "sizeof(ptr) is: " << sizeof(ptr) << endl;
    cout << "sizeof(*ptr) is: " << sizeof(*ptr) << endl;
    int size = 0;
    while(*(ptr + size) != '\0'){
        size++;
    }
    cout << "Size of Arr is: " << size << endl;
}