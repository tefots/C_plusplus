#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << "==========================================================================" << endl;
    cout<< "                               FILES                                        "<< endl;
    cout << "==========================================================================" << endl;

    // create and open the text file
    ofstream My_file("First_file.txt");

    //check if the file was successfully opened
    if(!My_file){
        cerr << "error while opening the file"<< endl;
        return 1;
    }


    //write to the file
    My_file << "This is the first file. So the content won't be too long";

    //closing the file
    My_file.close();
    cout<<"File written successfully "<< endl;

    //create the text string which is used to output the text file
    string text;
/*
    //reading from the text file
    ifstream My_file1("First_file.txt");

    //using while loop together with the getline() function to read the file line by line

    while(getline(My_file1, text)){
        //output the text from the file
        cout<< text;
    }

    //close the file
    My_file1.close();

    */

    return 0;
}
