#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter The Value Of A B and C = ";

    cin >> a >> b >> c;

    if((a==b)&&(b==c)){
        cout<<"A B and C are Equal";
        return 0;
    }

    if((a == b)&& (b != c))

    if(a>b){
        if(b>c){
            cout <<"A is Greatest";
        }else{
            cout<<"C is Greatest";
        }
    }
    if(b>c){
        if(c>a){
            cout<< "B is Greatest";
        }else{
            cout<< "C is Greatest";
        }
    }
    if(c>a){
            cout<< "C is Greatest";
    }
}