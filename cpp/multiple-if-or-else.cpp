#include <iostream>

using namespace std;

int main()
{
    int menu;
    cout << "1 for dosa\n 2 for idali\n 3 locho\n 4 ice-cream\n 5 for bindu-vada" << endl;
    cout << " enter your menu no = ";
    cin >> menu;
    if (menu == 1)
    {
        cout << " your dosa is here...";
    }
    else if (menu == 2)
    {
        cout << " your idali is here...";
    }
    else if (menu == 3)
    {
        cout << " your locho is here...";
    }
    else if (menu == 4)
    {
        cout << "your ice-cream is here...";
    }
    else if (menu == 5)
    {
        cout << "your bindu-vada is here...";
    }
    else
    {
        cout << "invalid menu no!";
    }
}