//program to calculate the vowel of alphabets
#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter name: ";
    getline(cin, name);
    int counter = name.length();
    int count = 0;
    for (int i = 0; i < counter; i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            count++;
        }
    }
    if (count > 0)
    {
        cout << "Vowel Present" << endl;
        cout << "Number: " << count;
    }
    else
    {
        cout << "Vowel Not present";
    }
}