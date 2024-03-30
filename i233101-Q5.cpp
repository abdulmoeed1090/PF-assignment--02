// i23-3101
// Abdulmoeed

#include <iostream>
// #include <cstring>

using namespace std;

int main()
{
    // constant
    const int SIZE = 100;
    // variales
    int arr1[SIZE], arr2[SIZE], arr3[SIZE], size1, size2;
    int i = 0;

    char choice;
    // Taking inputs
    cout << "Enter the size of first array : ";
    cin >> size1;
    cout << "Enter the size of second array (for differnce size should be same) : ";
    cin >> size2;
    while (size1 <= 0 || size2 <= 0 || size1 > 100 || size2 > 100)
    {
        cout << "Invalid input!\n";
        cout << "Enter the sizes of arrays (one by one) [1-100] : ";
        cin >> size1 >> size2;
        }
    cout << "Enter the elements of first array : ";
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the elements of second array : ";
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }
    cout << "Enter u for their union ,n for intersection and d for difference : ";
    cin >> choice;
    // using switch case
    switch (choice)
    {
    case 'n':
        cout << "The intersection of arrays is : ";
        for (int j = 0; j < size1; j++)
        {
            for (int k = 0; k < size2; k++)
            {
                // intersection
                if (arr1[j] == arr2[k])
                {
                    cout << arr1[j] << " ";
                }
            }
        }
        break;
    case 'u':
        // union
        cout << "The union of arrays is : ";
        for (int k = 0; k < size1; k++)
        {

            arr3[k] = arr1[k];
            for (int i = 0; i < size2; i++)
            {
                if (arr1[k] == arr2[i])
                {
                    arr3[k] = 0;
                    break;
                }
            }
        }
        size2 = sizeof(arr3) / sizeof(int);
        size1 = sizeof(arr2) / sizeof(int);

        for (int i = 0; i < 7; i++)
        {
            if (arr3[i] != 0)
            {
                cout << arr3[i] << " ";
                cout << arr2[i] << " ";
            }
        }

        break;
    case 'd':
        // difference
        if (size1 != size2)
        {
            cout << "The size is not same of both arrays! ";
        }
        else
        {
            cout << "The difference of arrays is : ";
            for (int k = 0; k < size1; k++)
            {
                arr3[k] = arr1[k];
                for (int i = 0; i < size2; i++)
                {
                    if (arr1[k] == arr2[i])
                    {
                        arr3[k] = 300000;
                        break;
                    }
                }
            }
            // displaying diffrerence
            for (int i = 0; i < size1; i++)
            {
                if (arr3[i] != 300000)
                {
                    cout << arr3[i] << " ";
                }
            }
        }

        break;
    default:
        cout << "Invalid input!\n";
        break;
    }
}