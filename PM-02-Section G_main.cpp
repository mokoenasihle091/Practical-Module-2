#include <iostream>

using namespace std;

int main()
{

    // Declare and initialize loop control variables
    int i = 1;
    int j = 1;

    // Execute the loop body
    cout << "Executing a for-loop:" << "\n";
    for (int count = 1; count <= 3; count++) {
        cout << "Run time " << count << "\n";
    }
    cout << "\n";
    cout << "\n" ;

    // Declare and initialize do-while loop
    cout << "Counting from 1-5:" << "\n";
    int num = 1;
    do {
        cout << num << " ";
        num++;
    } while (num <= 5);
    cout <<"\n";

    // Create nested do-while loop
    cout << "Nested do-while loop (pattern):" <<"\n";
    i = 1;
    do {
        j = 1;
        do {
            cout << "*";
            j++;
        } while (j <= i);
        cout << "\n";
        i++;
    } while (i <= 5);



    return 0;
}
