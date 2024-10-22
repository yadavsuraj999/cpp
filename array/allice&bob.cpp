#include <iostream>

using namespace std;

int main(){
    int size,a=0,b=0;
    cout<<"Enter Size Of Array : ";
    cin>>size;

    cout<<"Enter Allice Score : ";
    cin>>a;
    cout<<"Enter Bob Score : ";
    cin>>b;


    int arr[size];
    for(int i=0; i<size; i++ ){
        if(arr[i] > 0){
            a++;
        }else{
            b++;
        }
    }

    cout<<a<< " "<<b;
return 0;
}