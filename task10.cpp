//program to check the last letter of the word is same with the letter entered by the user or not.
#include<iostream>
using namespace std;
main()
{
    string name;
    char letter;
    cout<<"Enter name: ";
    getline(cin, name);
    cout<<"Enter letter: ";
    cin >> letter;
    int count = name.length();
    if(letter == name[count - 1]) //count-1 is used bcz if length = 6 then array will be from 0 to 5...
    {
        cout<<"Same";
    }
    else{
        cout<<"Not same";
    }
}