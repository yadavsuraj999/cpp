#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, max;

    cout << "Enter value for A : b : C : D : ";
    cin >> a >> b >> c >> d;

    max = a;
    if (max < a)
    {
        max = a;
    }
    if (max < b)
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }
    if (max < d)
    {
        max = d;
    }

    cout << " your maximum value is : " << max;
    return 0;
}