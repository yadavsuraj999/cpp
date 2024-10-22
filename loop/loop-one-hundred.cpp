#include <iostream>

using namespace std;

int main()
{
    int i = 1, num;
    cout << "Enter number = ";
    cin >> num;

    while (i <= num)
    {
        cout << i << " ";
        i++;
        if (i % 10 == 0)
        {
            cout << endl;
        }
    }
    cout << endl;
    i = 1;
    while (num >= i)
    {
        cout << num << " ";
        num--;
        if (num % 10 == 0)
        {
            cout << endl;
        }
    }

    return 0;
}