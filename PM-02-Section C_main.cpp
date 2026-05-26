#include <iostream>

using namespace std;

int main()
{
   //Arithmetic Operation
    int a,b;
    a = 23;
    b = 34;

    int c = a + b;
    int d = b-a;
    int e = a*b;
    int f = (b/a) ;
    int g = b%a;

    cout << " 23 added to 34 is equal to: "<< c <<"\n";
    cout << " 34 subtracted by 23 is equal to: "<< d<<"\n";
    cout << " 23 multiplied by 34 is equal to: "<< e<<"\n";
    cout << " 34 divided by 23 is equal to: "<< f<<"\n";
    cout << " 34 divided by 23 the remainder is: "<< g<<"\n";
    cout <<"\n";

    //Relational operators for the comparison of the values of two operands

    cout << "Comparison of 2 values: 1 for True and 2 for False"<< "\n";

    cout << "Is 23 bigger than 34? "<< (a>b) <<"\n";
    cout << "Is 23 less than b? "<< (a<b) <<"\n";
    cout << "Is 23 equal to 34? "<< (a==b) <<"\n";
    cout << "Is 23 not equal to 34? " << (a != b) <<"\n";
    cout <<"\n";

    //logical operators
    if ((a<b) && (a>0)){
        cout << "Both conditions are met!"<<"\n";
    }
    cout << "\n";

    //Bitwise Operators
    cout << (a & b)<< "\n";   // 1
    cout << (a | b)<< "\n";   // 7

    //Assignment Operators
    int x = 10;
    int y = 67;
    x += 5;   // x becomes 15
    cout <<"\n";

    //sizeof operator
    string stringname = "Dreamer";
    cout << "The size of integer 10 is: "<<sizeof(x)<<" byts"<< "\n";       // Usually 4 bytes
    cout << "The size of a string is: " <<sizeof(stringname)<<" byts"<< "\n";
    cout <<"\n";

    //Comma Operator
    int k,l,m;  //j,k;
    k = 5, l = 10, m = k + l;
    cout << k;
    cout <<"\n";

    //Binary to Decimal Conversion
    int binary, decimal = 0, base = 1, remainder;

    binary = 1011;
    cout << "My binary number: "<< binary;


    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        base *= 2;
        binary /= 10;
    }

    cout << "  Converted to a Decimal is = " << decimal << endl;




    return 0;
}
