#include <iostream>

using namespace std;

int main()
{
    int i, j, s;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if((j==3 || i==3)|| (i<=3 && j==1) || (j>=3 && i==1) ||(i>=3 && j==5) || (i==5 && j<=3)){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout << endl;
    }
    return 0;
}

// * * * * *
// *       *
// * * * * *
// *       *
// *       *