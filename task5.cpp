#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int arr[size];
    int smallest=arr[0];
    for(int i=0; i<size; i++)
    {
        cout<<"Enter number: ";
        cin>>arr[i];
    }
    for(int i=0; i< size; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout<<"Smallest: "<<smallest;
}