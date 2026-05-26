#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare a char
    char letter;

    // Input char
    cout << "Enter a character: ";
    cin >> letter;

    // Print char value
    cout << "\nCharacter entered: " << letter << "\n";

    // Print ASCII value
    cout << "ASCII value: " << int(letter) << "\n";

    // Convert char to string
    string text(1, letter);

    cout << "Converted string: " << text << "\n";

    return 0;
}
