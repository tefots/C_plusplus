#include <iostream>

using namespace std;

int main()
{
    int rows, cols;
    int maxItem;

    cout << "How many rows do you want your array to have?" << endl;
    cin >> rows;
    cout << "How many columns do you want your array to have?" << endl;
    cin >> cols;

   int  arrA[rows][cols];
    maxItem = arrA[0][0];


   cout<< "Give the values of the array based on your previous response" <<endl;

   for(int a = 0; a< rows; a++){
        for(int b = 0; b < cols; b++){
        cin >> arrA[a][b];

        }
        cout<<endl;

   }

    cout<< "Displaying out the matrix based on your input" <<endl;

    for(int i=0; i<  rows; i++){

        for(int x = 0; x< cols; x++)
        {
        cout<< " " << arrA[i][x];
        }
        cout<< endl;

    }

    cout<< "Finding the sum of elements in the matrix "<<endl;
    int sum =0;
     for(int s = 0; s < rows; s++){
        for(int p = 0; p < cols; p++) {
        sum += arrA[s][p];
        }
        cout<< endl;
     }

     cout<< "The sum of elements in the array: " <<sum <<endl;

     //finding the maximum item
     for(int x = 0; x < rows; x++){

        for(int s = 0; s < cols; s++){

            if(arrA[x][s] > maxItem) {
            maxItem = arrA[x][s];

            }

        }

     }

             cout << "The maximum item in the array:" << maxItem;


    return 0;
}
