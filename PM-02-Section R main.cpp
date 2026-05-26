#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
int add(int, int);

// User-defined function
int add(int a, int b)
{
    return a + b;
}

int main()
{
    // Built-in function
    cout << "Square root: " << sqrt(25) << "\n";

    // Pass arguments & Call function
    int result = add(10, 5);

    cout << "Addition: " << result << "\n";

    return 0;
}
