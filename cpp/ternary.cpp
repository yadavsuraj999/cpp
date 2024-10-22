#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "Enter year to check if it is leap year ! = ";
    cin >> year;
    ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 00)) ? cout << "It's a leap Year !" : cout << "It is not leap Year";
    return 0;
}