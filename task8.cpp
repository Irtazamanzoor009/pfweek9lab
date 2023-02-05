#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter name: ";
    getline(cin, name); // it is used in place of cin to read spaces as well as characters.
    int i = 0;
    while (name[i] != '\0')
    {

        i++;
    }
    cout << "Length: " << i << endl;
    if (i % 2 == 0)
    {
        cout << "Length even." << endl;
    }
    else
    {
        cout << "Length odd." << endl;
    }
}