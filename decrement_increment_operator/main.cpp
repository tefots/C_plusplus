#include <iostream>
//decrement and increment operators
using namespace std;

int main()
{
    int a=4, b=7;

    cout<< "The value of a is: "<<a<<endl;
    //cout << "The value of a with operator: ++a :"<<(++a) << endl;
    cout << "The value of a with operator a++ :"<<(a++) << endl;
    cout << "The value of a with operator: b++ :"<< (b++)<< endl;
    cout << "The value of b after b++ :"<< b<<endl;

    //assignment operators
    int x=0;
    cout << "X: "<<(x += 2)<<endl;
    cout << "X after increment: "<< x <<endl;
    return 0;
}
