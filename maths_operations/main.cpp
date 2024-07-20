#include <iostream>

using namespace std;

int main()
{
    int a, b;

    // Prompt the user to enter the numbers
    cout << "Enter the number: " << endl;
    cin >> a;
    cout << "Enter another number: " << endl;
    cin >> b;

    // Perform arithmetic operations after reading the input
    double sum = a + b;
    double division = static_cast<double>(a) / b; // Cast to double for floating-point division
    double multiply = a * b;
    int difference = a - b;

    // Display the results
    cout << "Sum: " << sum << endl;
    cout << "Division: " << division << endl;
    cout << "Multiplication: " << multiply << endl;
    cout << "Difference: " << difference << endl;

    return 0;
}
