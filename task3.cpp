#include<iostream>
using namespace std;
main()
{
    int size;
    int number;
    cout<<"Enter size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter a number to find: ";
    cin>>number;
    int count=0;
    for(int i=0; i<size; i++)
    {
        cout<<"Enter a number: ";
        cin>>arr[i];
        if(number == arr[i])
        {
            count = count + 1;
        }
    }
    if(count > 0)
    {
        cout<<"Already present";
    }
    else
    {
        cout<<"Not present";
    }
}