#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << "\n";
    try {
        int age;
        cout << "Enter age: ";
        cin >> age;

        if (age < 0) {
            throw 99;  // Throw exception
        }
        if (age >= 70){
            throw 100;
        }
        if (age > 120){
            throw string("Dead");
        }

        cout << "Age is: " << age << "\n";
    }

    catch (int error) {  // Catch exception
        if(error == 99){
        cout << "Error! Age can't be negative! Code: " << error << "\n";
        }
        else if(error == 100){
        cout <<"How are you still Alive! Code: " << error<<"\n";
       }
    }

    catch (string trouble){
        cout <<"Too old Code: " << trouble <<"\n";
    }

    return 0;
}
