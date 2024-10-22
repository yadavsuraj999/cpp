#include <iostream>

using namespace std;

int main()
{

    // fist method
    // int x = 100, y = 900, z;

    // cout << " before x = " << x << " y = " << y <<endl;

    // z = x;
    // x = y;
    // y = z;

    // cout << " After x = " << x << " y = " << y;



    // second method
    // for byte deficency and not using extra veriable
    int x = 100, y = 500;

    cout << " before x =" << x << " y = " << y << endl;

    x = x + y;
    y = x - y;
    x = x - y;

    cout << " after x = " << x << " y = " << y;
}