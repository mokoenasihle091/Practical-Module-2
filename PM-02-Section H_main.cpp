#include <iostream>

using namespace std;

// 1. Define values and declare an enumerated type
enum Colour { RED = 1, GREEN = 2, BLUE = 3 };

// 4. Function that swaps two values (reference parameters)
void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// 5. Function that returns a reference type variable
int& getMax(int &x, int &y) {
    if (x > y) {
        return x;  // Returns reference to x
    } else {
        return y;  // Returns reference to y
    }
}

int main()
{
    // 1. Using enumerated type
    Colour myColour = GREEN;
    cout << "Enumerated value: " << myColour << " (GREEN)" << "\n";
    cout << "Value of GREEN is: " << GREEN << "\n";

    // 2. Create reference variables
    int original = 100;
    int &ref = original;  // ref is a reference to original

    cout << "\nReference variables:" << "\n";
    cout << "original = " << original << "\n";
    cout << "ref = " << ref << "\n";

    ref = 200;  // Changing ref changes original
    cout << "After changing ref to 200:" << "\n";
    cout << "original = " << original << "\n";
    cout << "ref = " << ref << "\n";

    // 3. Function that swaps two values
    int num1 = 10, num2 = 20;
    cout << "\nBefore swap: num1 = " << num1 << ", num2 = " << num2 << "\n";
    swapValues(num1, num2);
    cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << "\n";

    // 4. Return a reference type variable
    int a = 50, b = 75;
    cout << "\na = " << a << ", b = " << b << "\n";

    int &maxRef = getMax(a, b);  // maxRef references the larger value
    cout << "Maximum value is: " << maxRef << "\n";

    // Modify through the returned reference
    maxRef = 100;
    cout << "After changing maxRef to 100:" << "\n";
    cout << "a = " << a << ", b = " << b << "\n";

    return 0;
}
