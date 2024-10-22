#include <iostream>

using namespace std;

int main()
{
    int start, end, i, n;
    bool flag = true;

    cout << "enter first number = ";
    cin >> start;
    cout << "enter second number = ";
    cin >> end;

    for (i = start; i <= end; i++)
    {
        flag = true;
        for (n = 2; n < i; n++)
        {
            if (i % n == 0)
            {
                flag = false;
            }
        }
        if (flag)
        {
            cout << i << " ";
        }
    }

    return 0;
}