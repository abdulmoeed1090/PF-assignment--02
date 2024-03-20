// i23-3101
// Abdulmoeed

#include <iostream>
using namespace std;
// main function
int main()
{
    // constant
    const int MAX_SIZE = 100;
    // variables
    int arr[MAX_SIZE], size, sell = -2147483647, buy = 2147483647, maxProfit = 0, maxNo = 0, minNo = 0;
    // Taking inputs
    cout << "Enter the size of array : ";
    cin >> size;
    cout << "Enter the elements of array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // Finding sell and buy
    for (int j = 0; j < size; j++)
    {

        if (arr[j] < buy)
        {
            buy = arr[j];
            minNo = j;
        }
        // Updating max profit and sell value
        if (arr[j] - buy > maxProfit)
        {
            maxProfit = arr[j] - buy;
            sell = arr[j];
            maxNo = j;
        }
    }
    // Checking if selling is before buying or not
    if (minNo > maxNo)
    {
        maxProfit = 0;
    }
    else
    {
        maxProfit = sell - buy;
    }
    // Displaying max profit
    cout << "Maximum Profit is : " << maxProfit << endl;

    return 0;
}