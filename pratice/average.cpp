#include <iostream>

using namespace std;

int main(){
    int size,sum=0;
    cout<<"Enter Array Size : ";
    cin>>size;
    int arr[size];

    for(int i=0; i<size; i++){
        cout<<"Enter Value : ";
        cin>>arr[i];
    }

    // for(int i=0; i<size; i++){
    //     cout<<arr[i];
    // }

    for(int i=0; i<size; i++){
        sum = sum + arr[i];
    }
    cout<<"Your Sum is : "<<sum<<endl;

    cout<<"Your Average is : "<<sum/size;
return 0;
}