#include <iostream>

using namespace std;

int main()
{
    int i, start_year, end_year;

    cout << "enter starting year = ";
    cin >> start_year;
    cout << "enter Ending year = ";
    cin >> end_year;

    if(start_year > end_year){
        start_year= start_year+end_year;
        end_year= start_year - end_year;
        start_year= start_year - end_year;

    }

    if ((start_year % 4 == 0))
    {
        for (i = start_year; i <= end_year; i += 4)
        {
            if ((i % 4 == 0)&&(i % 100 != 0 || i % 400 == 0))
            {
                cout << i << " ";
            }
        }
    }
    else
    {
        start_year = start_year + (4 - (start_year % 4));
        for (i = start_year; i <= end_year; i += 4)
        {
            if (i % 100 != 0 || i % 400 == 0)
            {
                cout << i << " ";
            }
        }
    }
    return 0;
}