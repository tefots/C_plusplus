#include <iostream>

using namespace std;

int main()
{
    //question 3
    int a,  b, c;
    a = 2;
    b = 7;
    c = ( a > b);
    cout<< c<<endl;

    //question 4
   /* int x =0;
        int z = 10;
        if (a > z && z < x ){
        cout<< "True"<<endl;
        }
        else {
        cout<< "False"<<endl;
        }

    */
        //increment and decrement operators

       /* int  s= 5, y = 5, z;
        s = ++s;
        y = --y;

        z = s++  +  y--;
        cout << z;
        */

        int  num1 = 5;
int num2 =3;
int num3 = 2;

num1  =  num2++;
num2  = --num3;

cout <<  num1  << num2;


    return 0;
}
