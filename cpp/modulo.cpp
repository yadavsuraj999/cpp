#include <iostream>

using namespace std;

int main()
{
    int a, b, modulo;
    cout << "enter your dividend = ";
    cin >> a;
    cout << "enter your divisor = ";
    cin >> b;
    modulo = a % b;
    cout << "your modulo of divison = " << modulo;
}