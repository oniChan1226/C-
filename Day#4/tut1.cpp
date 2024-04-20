#include <iostream>
using namespace std;

class Shape {
protected:
    
public:
    Shape(){
        cout << "Default of Shape\n";
    }
    virtual void print() {
        cout << "Drawing Shape\n";
    }
};
class Rectangle : public Shape {
    float length;
    float width;

public:
    Rectangle():length{0},width{0} {}
    Rectangle(float length, float width):length{length},width{width} {}
    void print() override {
        cout << "Drawing Rectangle\n";
    }
    void set(float length, float width) {
        this->length = length;
        this->width = width;
    }
    double get_length() {
        return double(length);
    }
    double get_width() {
        return double(width);
    }
    double get_area() {
        return double(length*width);
    }
    // auto display = [] () -> void {
    //     cout << length << " " << width << endl;
    // }
    
};

int main() {
    Shape* sh = new Shape[1];
    Rectangle r1;
    sh = &r1;
    sh->print();

    delete sh;
    return 0;
}