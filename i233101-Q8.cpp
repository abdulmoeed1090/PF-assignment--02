#include <iostream>
using namespace std;

int main()
{
 int num;
    cout << "Enter a number : ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int sp = 0; sp < num - i - 1; sp++)
        {
            cout << " ";
        }
        for (int star = 0; star < 2 * i + 1; star++)
        {
            if (star == 0 || star == 2 * i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = num - 2; i >= 0; i--)
    {
        for (int sp = 0; sp < num - i - 1; sp++)
        {
            cout << " ";
        }
        for (int star = 0; star < 2 * i + 1; star++)
        {
            if (star == 0 || star == 2 * i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
