#include <iostream>

using namespace std;

int main()
{
    int m, e, s, h, g, total;

    cout << "Enter your mathematics mark out of 100 = ";
    cin >> m;
    cout << "Enter your English mark out of 100 = ";
    cin >> e;
    cout << "Enter your Science mark out of 100 = ";
    cin >> s;
    cout << "Enter your Hindi mark out of 100 = ";
    cin >> h;
    cout << "Enter your Gujrati mark out of 100 = ";
    cin >> g;

    total = (m + e + s + h + g) / 5;

    if ((total >= 85) && (total <= 100))
    {
        cout << "A Grade :  " << total << endl;
    }
    else if ((total >= 70) && (total <= 85))
    {
        cout << "B Grade :  " << total << endl;
    }
    else if ((total >= 55) && (total <= 70))
    {
        cout << "C Grade : " << total << endl;
    }
    else if ((total >= 35) && (total <= 55))
    {
        cout << "D Grade : " << total << endl;
    }
    else
    {
        cout << "Fail";
    }
    return 0;
}