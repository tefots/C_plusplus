#include <iostream>

using namespace std;

int main()
{
    int a = 6, b = 4;

    // Assignment Operator
    cout << "a = " << a << endl;

    //  Add and Assignment Operator
    cout << "a += b is " << (a += b) << endl;

    // Subtract and Assignment Operator
    cout << "a -= b is " << (a -= b) << endl;

    //  Multiply and Assignment Operator
    cout << "a *= b is " << (a *= b) << endl;

    //  Divide and Assignment Operator
    cout << "a /= b is " << (a /= b) << endl;

    //Conditional or ternary operators
    // CPP Program to demonstrate the Conditional Operators

    int c = 3, d = 4;

    // Conditional Operator
    int result = (c < d) ? d : c;
    cout << "The greatest number is " << result << endl;

    //sizeof() operator
    char ed = sizeof(char); // returns 1
    double chadd;

    cout<< "The output of sizeof(double)" <<sizeof(chadd)<<endl;
    cout<< "The output of sizeof(float)" <<sizeof(float)<<endl;

    //

    return 0;
}
