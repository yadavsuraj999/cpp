#include <iostream>

using namespace std;

    void divide(int);


int main(){
    int d;
    cout<<"Enter value : ";
    cin>>d;

    divide(d);

return 0;
}

void divide(int a){
    if((a%3==0) && (a%5==0)){
        cout<<"Divisable By Both 3 and 5";
    }else if((a%3!=0) && (a%5==0)){
        cout<<"Divisable By 5 Not 3";
    }else if((a%3==0) && (a%5!=0)){
        cout<<"Divisable By 3 Not 5";
    }else{
        cout<<"Not Divisable By 5 Both 3";
    }
}