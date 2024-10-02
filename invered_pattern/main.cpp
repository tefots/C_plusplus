#include <iostream>

using namespace std;

int main()
{
    for(int i= 5; i >= 0; i--)
    {

        //another loop
        for(int s=0; s<=i; s++){
            cout<< "*";
        }
        cout<<endl;
    }
    return 0;
}
