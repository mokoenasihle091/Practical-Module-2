#include <iostream>

using namespace std;

int main()
{
    // Debugging tools help find errors
    // Example bug: division by zero

    int num1 = 10;
    int num2 = 0;

    // Analyse program flow
    cout << "Program started" << "\n";
    cout << "num1 = " << num1 << "\n";
    cout << "num2 = " << num2 << "\n";

    // PA2003 - Apply debugging steps
    // Step 1: Identify problem
    // Step 2: Check variable values
    // Step 3: Fix the error

    if(num2 != 0)
    {
        cout << "Result = "
             << num1 / num2 << "\n";
    }
    else
    {
        cout << "Error: Cannot divide by zero"
             << "\n";
    }

    cout << "Program ended" << "\n";

    return 0;
}
