//program to calculate the grade of the student based o their average
#include <iostream>

using namespace std;

int main()
{
    //variables decalaration
    int math, IoT, Cpp;
    float average = 0;

    //input from the user
    cout <<"Enter the marks in Maths: "<< endl;
    cin >> math;
    cout <<"Enter the marks in IoT: "<< endl;
    cin >> IoT;
    cout <<"Enter the marks in C++: "<< endl;
    cin >> Cpp;

    //processing
    average = (math + IoT + Cpp)/3;

    //grading
    if(average> 0 && average < 50){
        cout<< "The symbol for this student is: F"<< endl;
    }
    else if (average >= 50 && average < 60){
        cout<< "The symbol for this student is: C"<< endl;
    }
    else if (average >=60 && average < 80){
        cout<< "The symbol for this student is: B"<< endl;
    }
    else if (average >= 80 && average < 101){
        cout<< "The symbol for this student is: A"<< endl;
    }
    else {
        cout<< "The marks are infinite"<< endl;
    }


    return 0;
}
