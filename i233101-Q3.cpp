// i23-3101
// Abdulmoeed

#include <iostream>
using namespace std;

int main()
{
    // variables
    int amount, sum, sub, notes[7] = {100, 50, 20, 10, 5, 2, 1}, coins[7] = {100, 50, 20, 10, 5, 2, 1}, count = 0, countCoins = 0, var;
    // taking inputs
    cout << "Enter the amount : ";
    cin >> amount;
    while (amount <= 0)
    {
        cout << "Invalid input!\n";
        cout << "Enter the amount : ";
        cin >> amount;
    }

    // Calculate notes
    sum = amount % 10;
    sub = amount - sum;
    for (int i = 0; i < 7; i++)
    {
        if (sub >= notes[i])
        {
            count = sub / notes[i];
            cout << "Count is : " << count << endl;
            var = notes[i];
            cout << count << " note of Rs : " << notes[i] << endl;
            sub %= notes[i];
        }
    }

    // Calculating coins
    for (int i = 0; i < 7; i++)
    {

        if (sum > 0)
        {
            if (sum == coins[i])
            {
                countCoins++;
                cout << countCoins << " coin of Rs : " << sum << endl;
            }
            else
            {
                countCoins++;
                sum = sum - coins[i] + 100;
                cout << countCoins << " coin of Rs : " << sum << endl;
                break;
            }
        }
    }
    return 0;
}
