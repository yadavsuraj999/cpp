#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, sum = 0;

    cout << "Enter any number and get your fibonnacci = ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << t1 << ", ";
            
        }
        if(i == 2) {
            cout << t2 << ", ";
            
        }
        sum = t1 + t2;
        t1 = t2;
        t2 = sum;
        
        cout << sum << ", ";
    }
    return 0;
}