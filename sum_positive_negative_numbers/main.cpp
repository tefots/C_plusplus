#include <iostream>
using namespace std;

int main() {
    int num, positiveSum = 0, negativeSum = 0;

    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> num;
        if (num > 0) {
            positiveSum += num;
        } else if (num < 0) {
            negativeSum += num;
        }
    }

    cout << "Sum of positive numbers: " << positiveSum << endl;
    cout << "Sum of negative numbers: " << negativeSum << endl;

    return 0;
}
