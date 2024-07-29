//program to demonstrate the simple pyramid pattern
#include <iostream>

using namespace std;

int main()
{
    cout << "Program to print simple pyramid" << endl;

    //usage of the for loop
    //outer loop to handle the number of rows
    //in this case rows are 5
    for(int i=0; i < 5; i++){

        //inner loop to handle the number columns
        for(int x = 0; x < i; x++){
            cout<< "*";
        }
        cout<<endl;

    }

    return 0;
}
