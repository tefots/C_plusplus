// C++ program to Demonstrate do-while loop
#include <iostream>
using namespace std;

int main()
{
	int i = 2, sum=0; // Initialization expression

	do {
		// loop body
		cout << "The value of i: "<<i<<endl;

		// update expression
		i++;

	} while (i < 5); // test expression

	cout<< "The second Do while loop:"<<endl;
	//do while loop increasing the sum
	do {
		// loop body

		cout << "The value of sum now is: "<<sum<<endl;
        sum += 1;
		// update expression
		//sum++;

	} while (sum < 10); // test expression

	return 0;
}
