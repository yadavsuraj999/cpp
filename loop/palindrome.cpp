#include <iostream>

using namespace std;

int main()
{
    int n, ans = 0, r,tem;
    cout << "enter number = ";
    cin >> n;
    tem=n;
    while (n != 0)
    {
        r = n % 10;
        ans = (ans * 10) + r;
        n=n/10;
        
    }

    if(ans==tem){
        cout<<"its a palindrome number";
    }else{
        cout<<"not a palindrome number";
    }
    return 0;
}