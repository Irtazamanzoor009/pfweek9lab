#include <iostream>
using namespace std;
main()
{
    int size1, size2;
    cout << "Enter the size of 1st array: ";
    cin >> size1;
    int arr[size1];
    cout << "Enter the size of 2nd array: ";
    cin >> size2;
    int arr1[size2];
    for (int i = 0; i < size1; i++)
    {
        cout << "Enter number of 1st array: ";
        cin >> arr[i];
    }
    for (int j = 0; j < size2; j++)
    {
        cout << "Enter number of 2nd array: ";
        cin >> arr1[j];
    }
    for (int i = 0; i < size1; i++)
    {
        cout <<"["<< arr[0] << " "<<", ";
        for (int j = 0; j < size2; j++)
        {
            cout << arr1[j] << " "<<", ";
        }
        cout << arr[size1 - 1] << " "<<"]";
        break;
    }
}