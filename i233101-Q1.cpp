#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the positive odd number : ";
    cin >> num;
    if (num % 2==0)
    {
        cout << "Invalid input!\n";
    }
    else
    {
        for (int i = 0; i < num / 2 + 1; i++)
        {
            for (int sp = 0; sp < i; sp++)
            {
                cout << " ";
            }
            for (int star = 0; star < num - 2 * i; star++)
            {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = num / 2 - 1; i >= 0; i--)
        {
            for (int sp = 0; sp < i; sp++)
            {
                cout << " ";
            }
            for (int star = 0; star < num - 2 * i; star++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}