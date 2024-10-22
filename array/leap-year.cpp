#include <iostream>

using namespace std;

int main()
{
    int i, size, year = 0;

    cout << "Enter Number = ";
    cin >> size;

    int arr[size];
    for (i = 0; i < size; i++)
    {
        cout << "Enter Index Value of " << i << " : ";
        cin >> arr[i];
    }

    for (i = 0; i < size; i++)
    {
        if ((arr[i] % 4 == 0) and (arr[i] % 100 != 0 or (arr[i] % 400 == 0)))
        {
            year++;
        }
    }
    cout << year;

    return 0;
}