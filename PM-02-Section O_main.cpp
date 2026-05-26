#include <iostream>
using namespace std;

// Declare a class
class Dog {
public:
    string name;
    int age;

    // Constructor (initializes objects)
    Dog(string n, int a) {
        name = n;
        age = a;
    }

    // Member function
    void bark() {
        cout << name << " says Woof!" << "\n";
    }

    // Destructor
     Dog() {
        cout << name << " is gone" << "\n";
    }
};

int main() {
    // Declare and create multiple objects
    Dog dog1("Buddy", 3);
    Dog dog2("Max", 5);
    Dog dog3("Bella", 2);

    // Access class members
    cout << dog1.name << " is " << dog1.age << " years old" << "\n";
    dog1.bark();

    cout << dog2.name << " is " << dog2.age << " years old" << "\n";
    dog2.bark();

    cout << dog3.name << " is " << dog3.age << " years old" << "\n";
    dog3.bark();


    return 0;
}
