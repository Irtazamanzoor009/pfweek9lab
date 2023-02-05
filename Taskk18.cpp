//program to calculate the largest number...
#include <iostream>
using namespace std;
main()
{
    int size = 0;
    int number = 0;
    cout << "Enter the size: ";
    cin >> size;
    int arr[size];
    int largest;
    for (int i = 0; i < size; i++)
    {
        largest = arr[0];
        cout << "Enter number: ";
        cin >> arr[i];
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }
    cout << "Largest number: " << largest << endl;
}