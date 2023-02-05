// program to check the letter that is entered by the user is present in a word or not.
#include <iostream>
using namespace std;
main()
{
    string name;
    char letter;
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter letter: ";
    cin >> letter;
    int counter = name.length();
    int count = 0;
    for (int i = 0; i < counter; i++)
    {
        if (name[i] == letter)
        {
            count++;
        }
    }
    if (count > 0)
    {
        cout << "Present";
    }
    else
    {
        cout << "not present";
    }
}