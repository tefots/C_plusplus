//program to print multiplication table
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) { // Outer loop for rows
        for (int j = 1; j <= 10; j++) { // Inner loop for columns
            cout << i * j << "\t"; // Print product of i and j
        }
        cout << endl; // Move to the next line after completing one row
    }
    return 0;
}
