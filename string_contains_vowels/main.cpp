#include <iostream>

using namespace std;

int main()
{
    char word;

    //input
    cout<< "Enter the word"<<endl;
    cin >> word;

    if(word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u'){
        cout << "The character is a vowel"<<endl;
    }

    else{
        cout<<"The character is not a vowel"<<endl;
    }
    return 0;
}
