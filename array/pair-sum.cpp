#include <iostream>

using namespace std;

int main(){
    int size;

    cout<<"Enter Size of Array : ";
    cin>>size;

    int arr[size];

   
    for(int i=0; i<size; i++){
        cout<<"Enter value : ";
        cin>>arr[i];
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }





return 0;
}