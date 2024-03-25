// i23-3101
// Abdulmoeed

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // variables
    int num, count = 0, sum = 0, digit;
    // Taking inputs
    cout << "Enter a number[>=10]: ";
    cin >> num;
    // Input validation
    while (num < 10)
    {
        cout << "Enter a number[>=10]: ";
        cin >> num;
    }
    // Checking if a number is happy or not
    while (num != 1 && count < 10)
    {
        sum = 0;

        while (num > 0)
        {
            digit = num % 10;
            sum += pow(digit, 2);
            num /= 10;
        }
        num = sum;
        count++;
    }

    // Check if the number is a happy number or not
    if (num == 1)
    {
        cout << "This is a happy number." << endl;
    }
    else
    {
        cout << "This is not a happy number." << endl;
    }

    return 0;
}
