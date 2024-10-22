#include <iostream>

using namespace std;

int main()
{
    int i, r, p, choose;

    cout << "enter r and p value = ";
    cin >> r >> p;

    cout << "enter 1 for add(+)\n"
         << "enter 2 for sub(-)\n"
         << "enter 3 for mul(*)\n"
         << "enter 4 for sub(/)\n"
         << "enter 5 is invalid\n";
    cout << "enter number = ";
    cin >> choose;

    for (i = 1; i <= choose; i++)
    {
        switch (choose)
        {
        case 1:
            cout << r + p;
            break;
        case 2:
            cout << r - p;
            break;
        case 3:
            cout << r * p;
            break;
        case 4:
            cout << r / p;
            break;
        default:
            cout << "invalid input ";
        }
    }while(choose >= 5);
    return 0;
}