// oop basic's
#include"tut1.h"

void car :: set(string model, int year) {
    this->model = model;
    this->year = year;
}

void car :: print_report() {
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
    cout << "Tag: " << tag << endl;
    cout << "Times Started: " << times_started << endl;
}
void car :: start() {
    if(status){
        cout << "Already Start\n";
    }
    else {
        cout << "Started\n";
        times_started += 1;
        status = true;
    }
}
void car :: stop() {
    if(status) {
        cout << "Engine Off\n";
        status = false;
    }
    else {
        cout << "Engine Already Off\n";
    }
}
car :: ~car() {
    cout << "De-Constructor Called\n";
}

int main() {
    car c1;
    c1.set("Mustang", 2002);
    c1.start();
    c1.start();
    c1.stop();
    c1.stop();
    c1.start();
    c1.stop();
    c1.print_report();

    return 0;
}