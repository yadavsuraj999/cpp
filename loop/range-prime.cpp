#include <iostream>

using namespace std;

int main()
{

    int start, end, i, j;
    bool flag = true;

    cout << "enter first number = ";
    cin >> start;
    cout << "enter second number = ";
    cin >> end;

    for (i = start; i <= end; i++)
    {
        flag = true;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << i << ",";
        }
    }
    return 0;
}
