#include <iostream>
using namespace std;
main()
{
    string name, newname;
    cout << "Enter a name: ";
    getline(cin, name);
    int counter = name.length();
    int i;
    for (i = 0; i < counter; i++)
    {

        if(name[i]=='z')
        {
            name[i]='a';
        }
        else{
        name[i] = name[i] + 1;
        }
    }
    for (int i = 0; i < counter; i++)
    {
        cout << name[i];
    }
}