#include <iostream>
using namespace std;

int main()
{
    // variables
    int arr[100], bars, max = 0;
    // Taking inputs
    cout << "Enter the number of bars [1-30] : ";
    cin >> bars;
    if (bars <= 0 || bars > 30)
    {
        cout << "Invalid input!\n";
    }
    else
    {
        cout << "Enter the length of bars (one by one): ";
        for (int i = 0; i < bars; i++)
        {
            cin >> arr[i];
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        // Printing the bars
        for (int row = max; row > 0; row--)
        {
            for (int col = 0; col < bars; col++)
            {
                if (arr[col] >= row)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
