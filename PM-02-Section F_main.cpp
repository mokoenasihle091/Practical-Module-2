#include <iostream>

using namespace std;

int main()
{
  /*  //Declare and initialise an array in C++
    int numbers[]={12,23,34,45,56};
    int *point1 = numbers;

    cout <<"\n";
    //Use a pointer in an array and access the elements using indexes
    cout << "Pointer 1 points to the second value in the numbers array: "<<point1[1]<<"\n";
    cout <<"Access the element in index 3: "<< numbers[3]<<"\n";
    cout <<"Access the element in index 4: "<< numbers[4]<<"\n";

    //Add elements to the array
    numbers[6] = 67;
    cout <<"Access the element in index 6: "<< numbers[6]<<"\n"; */

  /*  int* arr = new int[5]{1, 2, 3, 4, 5};
    int size = 5;
    int indexToRemove = 2;

    //print original array
    cout << "The original array is: ";
    for (int r=0 ; r<5; r++){
        cout << arr[r]<<" " ;
    }

    // Create new array
    int* newArr = new int[size - 1];

    // Copy elements before the removed index
    for (int i = 0; i < indexToRemove; i++) {
        newArr[i] = arr[i];
    }

    // Copy elements after the removed index
    for (int i = indexToRemove + 1; i < size; i++) {
        newArr[i - 1] = arr[i];
    }

    // Clean up old array
    delete[] arr;
    arr = newArr;
    size--;

    //delete when done
    delete[] arr;  // Don't forget to
    cout << "The modfied array is: ";
    for (int r=0 ; r<5; r++){
        cout << arr[r]<<" " ;
    }
    cout << "/n";    */

    //Find max and min in an array
    int arr[] = {15, 8, 22, 4, 19};
    int min = arr[0];
    int max = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }

    cout << "Minimum = " << min << endl;
    cout << "Maximum = " << max << endl;

    return 0;
}
