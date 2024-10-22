#include <iostream>

using namespace std;

int main()
{
    int n, p, sum=1;
    cout << "Enter base (n) : ";
    cin >> n;
    cout << "Enter power (p) : ";
    cin >> p;
    for (int i = 1; i <= p; i++)
    {
       sum=sum*n;
    }
    cout << sum << endl;
    return 0;
}

