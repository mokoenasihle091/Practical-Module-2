#include <iostream>
#include <list>
using namespace std;

int main()
{
    // PA1701 - Define a standard list
    list<int> numbers;

    // PA1702 - Insert into a list
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_front(5);

    // PA1704 - Insert anywhere
    auto it = numbers.begin();
    advance(it, 1);
    numbers.insert(it, 15);

    // Display list
    cout << "List elements: ";
    for(int num : numbers)
    {
        cout << num << " ";
    }

    // PA1703 - Delete from a list
    numbers.pop_back();

    // PA1704 - Remove anywhere
    it = numbers.begin();
    advance(it, 1);
    numbers.erase(it);

    cout << "\nAfter deletion: ";
    for(int num : numbers)
    {
        cout << num << " ";
    }

    return 0;
}
