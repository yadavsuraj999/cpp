#include <iostream>

using namespace std;

int main(){
    int size,max=0;
    cout<<"Enter Array Size : ";
    cin>>size;

    int arr[size];
    for(int i=0; i<size; i++){
        cout<<"enter value : ";
        cin>>arr[i];
    }

    for(int i=0; i<size; i++){
        if(max<=arr[i]){
            max=arr[i];
        }
    }
    cout<<max;
return 0;
}