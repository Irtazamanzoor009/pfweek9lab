#include<iostream>
using namespace std;
main()
{
    int size;
    float sum = 0;
    cout<<"Enter size: ";
    cin>>size;
    float arr[size];
    for(int i=0; i< size; i++)
    {
        cout<<"Enter resistance: ";
        cin>> arr[i];
        sum = sum + arr[i];
    }
    cout<<"Resistance is: "<<sum<<endl;
}