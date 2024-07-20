// C++ program to Demonstrate while loop
#include <iostream>
using namespace std;

int main()
{
	// initialization expression
	int i = 1;
	double sum = 0;


	// test expression
	while (i < 6) {
		cout << "Hello World\n";
		// update expression
		i++;
	}

	//increasing sum
	//printing the list of odd numbers
	while (sum < 15) {

    sum += 1;
    cout << "Value of sum now is:"<<sum<<"\n";
    // update expression
		sum++;
	}

	return 0;
}
