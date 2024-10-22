#include <iostream>

using namespace std;

int main()
{
    int n, ans = 0, r;
    cout << "enter number = ";
    cin >> n;

    while (n != 0)
    {
        r = n % 10;
        ans = (ans * 10) + r;
        n=n/10;
    }

    cout << "your reverse nember is = " << ans;
    return 0;
}