#include <iostream>

using namespace std;

int main(){
    int size,reminder,grad;
    cout<<"Enter Array Size : ";
    cin>>size;

    int arr[size];
    

    for(int i=0; i<size; i++){
        grad=arr[i];
        if(grad>=38){
            reminder=arr[i]%5;
        }if(reminder>=3){
            grad+=(5-reminder);
        }
    }

    cout<<grad<<endl;
return 0;
}