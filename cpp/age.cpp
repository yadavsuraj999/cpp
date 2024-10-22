#include <iostream>

using namespace std;

int main(){
    int year;
    cout << " enter your age = ";
    cin >> year;

    if (year >= 18){
        cout << " your are adult";
    }else {
        cout<< " your are minor";
    }
}