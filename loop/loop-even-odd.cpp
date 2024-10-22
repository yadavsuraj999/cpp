#include <iostream>

using namespace std;

int main()
{
    int i, num;
    cout << "enter any number for its even number and odd number = ";
    cin >> num;
    cout << "your even is = ";
    
     for (i=2; i <= num; i+=2){
        cout<<i <<" ";
     }

    cout<<endl;

     cout << "your odd is = ";

     for (i=1; i <= num; i+=2){
        cout<<i <<" ";
     }
    return 0;
}