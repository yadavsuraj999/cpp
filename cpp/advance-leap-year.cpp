#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "enter year = ";
    cin >> year;

    if((year % 4 == 0) && (year % 100 != 0)  || (year % 400 == 0)){
    cout<< " its is a leap year";
    }else{
        cout<< "its is not a leap year";
    }
}