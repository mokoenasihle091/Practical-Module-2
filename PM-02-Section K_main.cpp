#include <iostream>

using namespace std;

int main()
{
    int marks = 75;

    // Pointer declared and initialized
    // Pointer stores address of marks
    int *ptr = &marks;

    cout << "Address stored in pointer: " << ptr << "\n";

    // Accessing value using pointer
    cout << "Value of marks using pointer: " << *ptr << "\n";


    return 0;
}
