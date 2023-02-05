#include <iostream>
using namespace std;
main()
{
    float price;
    cout<<"Price of item: ";
    cin>>price;
    float arr[4];
    float sum = 0;
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter number: ";
        cin >> arr[i];
    }
        float quarters = arr[0] * 0.25;
        float dimes = arr[1] * 0.1;
        float nickels = arr[2] * 0.05;
        float pennies = arr[3] * 0.01;
        sum = quarters + dimes + nickels + pennies;
    if(sum >= price)
    {
        cout<<"True";
    }
    else if (sum < price)
    {
        cout<<"False";
    }
}