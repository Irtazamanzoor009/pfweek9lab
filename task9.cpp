//program to reverse the name entred by the user.
#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter name: ";
    getline(cin, name);                 // it is used in place of cin to read spaces as well as characters.
    int i = 0;

    while (name[i] != '\0')
    {

        i++;
    }
    for(int j=i-1; j>=0; j-- )
    {
    cout << name[j];
    }
} 