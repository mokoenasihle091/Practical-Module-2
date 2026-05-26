#include <iostream>

using namespace std;

int main()
{

    int size = 5;

    // Create dynamic array
    int *numbers = new int[size];

    // Initialise array
    for(int i = 0; i < size; i++)
    {
        numbers[i] = i * 10;
    }

    // Display elements
    for(int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << "\n";

    // Delete dynamic array
    delete[] numbers;

    cout << "Memory released successfully." <<"\n";


    return 0;
}
