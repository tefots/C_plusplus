#include <iostream>

using namespace std;

int main()
{
    //declaration of variables
    int a,b;

    //taking input from the user
    cout<< "Enter the first number" << endl;
    cin >>a;
    cout<< "Enter the second number" << endl;
    cin >>b;
    //decision and output
    if(a>b){
        cout<<"The largest number is:"<<a<<endl;
          }
    else{
        cout<<"The largest number is:" <<b<<endl;
    }
    return 0;
}
