#include <iostream>

using namespace std;

int main()
{
    int n, r, count = 0;

    cout << "enter number = ";
    cin >> n;

    while (n != 0)
    {
        r = n % 10;
        count++;
        n = n / 10;
    }
    cout << "your digit of number = " << count;
    return 0;
}