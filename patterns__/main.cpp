#include <iostream>

using namespace std;

int main()
{
    cout << "Patterns: " << endl;

    //using the loop to print different patterns
    //outer loop for rows
    for(int i = 1; i<=5; i ++){
        //inner loop for the columns
        for(int x = 1; x<=i; x++){
            cout<< " # ";
        }
        cout << endl;
    }
    return 0;
}
