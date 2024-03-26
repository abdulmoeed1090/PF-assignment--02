// i23-3101
// Abdulmoeed

#include <iostream>
using namespace std;

int main()
{
    // variables
    int counts[10] = {0}, number, count, extractedNumber;
    // Taking input
    cout << "Enter a +ve number : ";
    cin >> number;
    // input validation
    while (number < 0)
    {
        cout << "Invalid input!\n";
        cout << "Enter a +ve number : ";
        cin >> number;
    }
    // counting frequencies

    for (int i = 0; i <= number; i++)
    {
        count = i;
        if (count == 0)
        {
            counts[0]++;
        }

        while (count > 0)
        {
            extractedNumber = count % 10;
            // cout << "Digit is : " << extractedNumber << endl;
            counts[extractedNumber]++;
            count /= 10;
        }
    }

    // Displaying the frequences
    for (int i = 0; i <= 9; i++)
    {
        cout << i << " occurs " << counts[i] << " times" << endl;
    }

    return 0;
}
