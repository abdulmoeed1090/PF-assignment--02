#include <iostream>
using namespace std;

int main()
{
    int num, count, first, third, second;
    cout << "Enter the number to check whether it is happy number or not : ";

    cin >> num;
    while (num < 10)
    {
        cout << "Enter the number to check whether it is happy number or not : ";
        cin >> num;
    }


    return 0;
}