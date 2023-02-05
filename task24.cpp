//program to calculate the vowel of alphabets
#include <iostream>
using namespace std;
main()
{
    string statement;
    cout << "Enter name: ";
    getline(cin, statement);
    int counter = statement.length();
    for (int i = 0; i < counter; i++)
    {
        if (statement[i] == 'a' || statement[i] == 'e' || statement[i] == 'i' || statement[i] == 'o' || statement[i] == 'u')
            {
                continue;
            }
    cout<<statement[i];
    }
    
}