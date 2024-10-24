#include <iostream>

using namespace std;

int main(){
    int size,max=0,count=0;

    cout<<"Enter size of array : ";
    cin>>size;
    

    int arr[size];
for(int i=0; i<size; i++ ){
    cout<<"enter Value : ";
    cin>>arr[i];
    }
for(int i=0; i<size; i++ ){
    cout<<arr[i]<<" ";
    if(arr[i]>max){
        max=arr[i];
    
    }
    }
    
    for(int i=0; i<size; i++){
        if(arr[i]==max){
        count++;
        }
    }
cout<<endl<<count;

return  0;
}