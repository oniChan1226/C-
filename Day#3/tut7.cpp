#include<iostream>
#include<string>
using namespace std;

int main() {
    // find length of a string
    string var = "Fahad Khan";
    char arr[12] = "Fahad Khan";
    auto get_length = [var, arr] () -> int {
        int size = sizeof(var)/sizeof(var[0]);
        int size_2 = sizeof(arr)/sizeof(arr[0]);
        cout << size << endl;
        cout << size_2 << endl;
        return size;
    };
    int length = get_length();
    cout << length << endl;

    return 0;
}