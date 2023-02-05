// user enter a number and array will be multiplied with the number and print result in reverse order.
#include <iostream>
using namespace std;
main()
{
    int number;
    int size;
    cout << "Enter size: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number: ";
        cin >> arr[i];
    }
    cout << "Enter a number you want to multiply: ";
    cin >> number;
    for (int i = size - 1; i >= 0; i--)
    {
        cout << number * arr[i] << " ";
    }
}