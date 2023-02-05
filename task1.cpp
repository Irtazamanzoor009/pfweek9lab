#include<iostream>
using namespace std;
main()
{
    int size;
    int sum = 0;
    float avg;
    cout<<"Enter size: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++)
    {
        cout<<"Enter number: ";
        cin >> arr[size];
        sum = sum + arr[size];
        avg = sum / size;
    }
    cout<< "sum is: "<<sum<<endl;
    cout<< "Average is: "<< avg << endl;
}