#include <iostream>

using namespace std;

int main()
{
    int p, r, t;
    float simple;

    cout << " enter principal amount = ";
    cin >> p;
    cout << " enter rate of interest amount = ";
    cin >> r;
    cout << " enter time dueresion = " ;
    cin >> t;

    simple = (p * r * t) / 100;

    simple = simple + p;

    cout << "your simple interest is = " << simple;
}