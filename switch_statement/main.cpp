// C++ program to demonstrate syntax of switch
#include <string>
#include <iostream>
using namespace std;

// Driver Code
int main()
{
    // switch variable
    int month;


    cout<<"Enter the current month number"<<endl;
    cin >> month;

    // switch statements
    switch (month) {
    case 1:
        cout << "The month is January";
        break;
    case 2:
        cout << "The month is February";
        break;
    case 3:
        cout << "The month is March";
        break;
    case 4:
        cout<<"The month is April";
        break;
    default:
        cout << "Your're out of scope";
        break;
    }
    return 0;
}
