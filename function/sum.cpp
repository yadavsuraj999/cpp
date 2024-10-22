#include <iostream>

using namespace std;

int don(int [], int);

int main(){
    int size,k;
    cout<<"Size Of array : ";
    cin>>size;

    int arr[size];
    for(int i=0; i<size; i++){
        cout<<"Enter Value : ";
        cin>>arr[i];
    }
 
    
    k = don(arr, size);
    cout<<k;
return 0;
}

int don(int arr[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum= sum+arr[i];
  }
    return sum;
}   
