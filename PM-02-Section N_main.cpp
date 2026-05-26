
#include <iostream>
#include <string>
using namespace std;

// Create a C++ structure
struct Student
{
    int id;
    string name;
    float marks;
};

// Pass a struct to a function as an argument
void displayStudent(Student st1)
{
    cout << "\nStudent Details" << "\n";
    cout << "ID: " << st1.id << "\n";
    cout << "Name: " << st1.name << "\n";
    cout << "Marks: " << st1.marks << "\n";
}

int main()
{
    // Create struct instances
    Student student1;

    // Initialise a structure
    student1.id = 123456789;
    student1.name = "Dan";
    student1.marks = 85.5;

    // Access a structure
    cout << "Accessing Structure Members" << "\n";
    cout << "Student ID: " << student1.id << "\n";
    cout << "Student Name: " << student1.name << "\n";
    cout << "Student Marks: " << student1.marks << "\n";

    // Create a pointer to a structure
    Student *ptr = &student1;

    cout << "\nUsing Structure Pointer" << "\n";
    cout << "ID: " << (*ptr).id << "\n";
    cout << "Name: " << ptr->name << "\n";
    cout << "Marks: " << ptr->marks << "\n";

    //Pass struct to function
    displayStudent(student1);



    return 0;
}

