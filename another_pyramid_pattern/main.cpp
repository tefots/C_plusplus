#include <iostream>

using namespace std;

int main()
{
    cout << "More on pyramid patterns" << endl;
    //usage of for loops to display pattern
    //outer loop handling number of rows
    for(int i = 0; i < 6; i ++)
    {
        //inner loop to handle columns
        for(int x = 5; x > i; x--)
        {
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}
