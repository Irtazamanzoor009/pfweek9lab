#include<iostream>
using namespace std;
main()
{
    string statement;
    cout<<"Enter a statement: ";
    getline(cin, statement);
    string line = "something";
    cout<<line<<" "<< statement;
}