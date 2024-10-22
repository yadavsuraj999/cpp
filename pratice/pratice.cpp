#include <iostream>

using namespace std;

int main(){
    int i,count=0,r;
    cout<<"Enter Number : ";
    cin>>i;

    while(i != 0){
        r = i%10;
        count++;
        i = i/10;
    }
    cout<<"Your Diget is : "<<count;
return 0;
}