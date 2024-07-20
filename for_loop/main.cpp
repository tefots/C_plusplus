// C++ program to Demonstrate for loop
#include <iostream>
using namespace std;

int main()
{   //program to print hello world 5 times
	for (int i = 1; i <= 5; i++) {
		cout << "Hello World\n";
	}
    cout << "\n\n\n";
	//program to print i am happy 5 times
	for (int x = 0; x < 5; x++) {

		cout<<"I am Happy"<<endl;
	}

	//for loop in arrays
    int arr[] {40, 50, 60, 70, 80, 90, 100};
    for (auto elements: arr){
    cout << elements << " ";
    //here auto is
    //elements is the name of the variable
    //arr is the name of the array

    /*
        auto element: The auto keyword automatically determines that element is of type int since arr is an array of integers.
        : arr:
         This specifies that the loop should iterate over the array arr.

    */
    }

    //complex codes
	for (int i = 0, j = 10, k = 20; (i + j + k) < 100;
		j++, k--, i += k) {
		cout << i << " " << j << " " << k << "\n";
	  }

	return 0;
}
