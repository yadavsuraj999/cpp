#include <iostream>

using namespace std;

int main()
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if ((i <= 5 && j == 1) || (i == 9 && j <= 5) ||( j == 5 ||i == 5) || (i == 1 && j >= 5) || (j == 9 && i >= 5))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}

// *       * * * * *
// *       *
// *       *
// *       *
// * * * * * * * * *
//         *       *
//         *       *
//         *       *
// * * * * *       *
