#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string name = "unknown";
    int age = 0;

    void print() {
        cout << "Car's name is: " << name << endl;
        cout << "Car's age is: " << age << endl;
    }

    Car(string name, int age) {
        this->name = name;
        this->age = age;
    }

    Car() = default; // Default constructor
};

int main() {
    Car car("sam", 10);
    car.print();

    car.name = "newName"; // Straightforward assignment
    car.age = 15;
    car.print();

    return 0;
}